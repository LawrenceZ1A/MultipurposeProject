import requests


class AttrDict(dict):
    def __init__(self, *args, **kwargs):
        super(AttrDict, self).__init__(*args, **kwargs)
        self.__dict__ = self


class BaseNews(object):
    def __init__(self, API_KEY):
        self.API_KEY = API_KEY
        self.payload = {"apiKey": self.API_KEY}
        self.AttrDict = AttrDict
        self.requests = requests
