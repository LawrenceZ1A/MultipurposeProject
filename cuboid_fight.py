#Source code of CTE
print("Starting...")

#Imports
try:
    import ujson as json
    
except (ModuleNotFoundError, ImportError):
    try:
        import simplejson as json

    except (ModuleNotFoundError, ImportError):
        import json
        
from tkinter import *
from getpass import getuser
    
#Loading game
with open(
    "game.json",
    "r",
    encoding="utf"
) as f:
    data = json.load(f)
    ldata = list(data)

default = {
    "color": "#000000",
    "width": "1280",
    "height": "720",
    "title": "FooBar",
    "resizeable": False
}
try:
    with open(
        "config.json",
        "r",
        encoding="utf"
    ) as f:
        try:
            configt, config = json.load(f), {}
            
            n = "color"; config[n] = str(configt.get(n, "#000000"))
            n = "width"; config[n] = str(configt.get(n, "1280"))
            n = "height"; config[n] = str(configt.get(n, "720"))
            n = "title"; config[n] = str(configt.get(n, "FooBar"))
            n = "resizeable"; config[n] = bool(configt.get(n, False))
            
            del configt, n
            
        except Exception as error:
            print("Config file was invalid. Use JSONlint to find the problem.")
            print("In case of improper error, check following message. " + type(error).__name__ + ": " + str(error))
            config = default
        
except FileNotFoundError:
    print("Config file was not found.")
    config = default

#Creating window
master = Tk()
master["background"] = config["color"]
master.geometry(config["width"] + "x" + config["height"])
master.title(config["title"])
master.resizable(config["resizeable"], config["resizeable"])

#Creating variables and stuff
cdata, cldata = data, ldata
var = StringVar()
var2 = ""

def textbox(text):
    """Textbox function"""
    tdis = Text(
        master,
        width=700,
        height=2
    )
    tdis.insert(
        INSERT,
        text
    )
    tdis.configure(state="disabled")
    tdis.pack()
    
    return tdis

def selecta(i):
    """Called when buttons are pressed to return value"""
    global var, var2
    var.set(i)
    var2 = i
    
def reset(*args, **kwargs):
    """Reset game"""
    global cdata, cldata, data, ldata, var, var2
    var.set("a")
    var2 = "[===Reset===]"
    
    with open(
        "game.json",
        "r",
        encoding="utf"
    ) as f:
        data = json.load(f)
        ldata = list(data)
        cdata, cldata = data, ldata
    
def button(texts, tbox):
    """Put button"""
    global master
    
    select = []
    for text in texts:
        if (text == "[===Reset===]"):
            temp = Button(
                master,
                text=str(text),
                command=lambda i=text: reset(
                    i
                )
            )
        
        else:
            temp = Button(
                master,
                text=str(text),
                command=lambda i=text: selecta(
                    i
                )
            )
            
        temp.pack()
        select.append(temp)
        
    master.wait_variable(var)
    
    for item in select:
        item.destroy()
        
    tbox.destroy()
    
    return var2

class EndDummy:
    """Dummy class for end reset"""
    def __init__(self, *args):
        self.thing = args
    
    def destroy(self):
        for item in self.thing:
            item.destroy()

#Mainloop
print("Running mainloop!")
while True:
    #Filters
    cdtype = str(type(cdata))
    if cdtype == "<class 'dict'>":
        cdata = {k.replace("%(name)s", getuser().title()):v for k,v in cdata.items()}
        
    elif cdtype == "<class 'list'>":
        cdata = [i.replace("%(name)s", getuser().title()) for i in cdata]
        
    cldata = list(cdata)
    
    if cdata == cldata:
        #If at ending
        enda = textbox("`".join(cldata[0].split("`")[:~0]))
        endb = textbox(cldata[0].split("`")[~0])
        temp = button(["[===Reset===]"], EndDummy(enda, endb))
        
    tbox = textbox(cldata[0])
    temp = button(cldata[1:] + ["[===Reset===]"], tbox)
    
    if str(temp) != "[===Reset===]":
        cdata = cdata[temp]
        cldata = list(cdata)