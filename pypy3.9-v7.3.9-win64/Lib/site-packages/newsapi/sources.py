from newsapi.base_news import BaseNews


class Sources(BaseNews):
    def __init__(self, API_KEY):
        super(Sources, self).__init__(API_KEY)
        self.endpoint = "https://newsapi.org/v1/sources"
        self.sources = []
        self.sources_base_info = {}
        self.sources_id_info = {}
        self.categories = {}
        self.languages = {}
        self.countries = {}

    def get(self, category="", language="", country="", attributes_format=True):
        self.payload['category'] = category
        self.payload['language'] = language
        self.payload['country'] = country
        r = self.requests.get(self.endpoint, params=self.payload)
        if r.status_code != 200:
            raise BaseException("Either server didn't respond or has resulted in zero results.")
        try:
            content = r.json()
        except ValueError:
            raise ValueError("No json data could be retrieved.")
        if attributes_format:
            return self.AttrDict(content)
        return content

    def all(self):
        return self.get()

    def get_by_category(self, category):
        return self.get(category=category)

    def get_by_language(self, language):
        return self.get(language=language)

    def get_by_country(self, country):
        return self.get(country=country)

    def information(self):
        content = self.get()
        self.sources = content.sources
        for index, source in enumerate(self.sources):
            category_name = source['category']
            language_name = source['language']
            country_name = source['country']
            identifier = source['id']
            name = source['name']
            desciption = source['description']
            url = source['url']
            urls_to_logos = source['urlsToLogos']
            sort_bys_available = source['sortBysAvailable']
            self.sources_base_info[name] = url
            self.sources_id_info[name] = identifier
            temp_dict = {
                "id": identifier, "name": name,
                "description": desciption, "url": url,
                "urls_to_logos": urls_to_logos,
                'sort_bys_available': sort_bys_available
            }
            if category_name in self.categories:
                self.categories[category_name].append([temp_dict])
            else:
                self.categories[category_name] = [temp_dict]
            if language_name in self.languages:
                self.languages[language_name].append([temp_dict])
            else:
                self.languages[language_name] = [temp_dict]
            if country_name in self.countries:
                self.countries[country_name].append([temp_dict])
            else:
                self.countries[country_name] = [temp_dict]
        return self

    def all_sorted_information(self):
        return self.sources

    def all_categories(self, detailed=False):
        if detailed:
            return self.categories
        return self.categories.keys()

    def all_languages(self, detailed=False):
        if detailed:
            return self.languages
        return self.languages.keys()

    def all_countries(self, detailed=False):
        if detailed:
            return self.countries
        return self.countries.keys()

    def all_base_information(self):
        return self.sources_base_info

    def all_ids(self, detailed=False):
        if detailed:
            return self.sources_id_info
        return self.sources_id_info.values()

    def all_names(self, detailed=False):
        if detailed:
            return self.sources_base_info
        return self.sources_base_info.keys()

    def all_urls(self, detailed=False):
        if detailed:
            return self.sources_base_info
        return self.sources_base_info.values()

    def search(self, name):
        matches = []
        if not self.sources:
            self.information()
        for source in self.sources:
            if name.lower() in source['name'].lower():
                matches.append(source)
        if not matches:
            return "No match found!"
        return matches
