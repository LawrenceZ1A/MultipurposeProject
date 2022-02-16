import tkinter

try:
    import ujson as json
    
except (ModuleNotFoundError, ImportError):
    try:
        import simplejson as json
        
    except (ModuleNotFoundError, ImportError):
        import json
        
with open("game.json", "r") as f:
    data = json.load(f)
    
print(data)