from newsapi.base_news import BaseNews


class Articles(BaseNews):
    def __init__(self, API_KEY):
        super(Articles, self).__init__(API_KEY)
        self.endpoint = "https://newsapi.org/v1/articles"

    def get(self, source, sort_by="top", attributes_format=True):
        self.payload['source'] = source
        self.payload['sortBy'] = sort_by
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

    def get_by_top(self, source):
        return self.get(source, sort_by="top")

    def get_by_latest(self, source):
        return self.get(source, sort_by="latest")

    def get_by_popular(self, source):
        return self.get(source, sort_by="popular")
