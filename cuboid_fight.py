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
with open("game.json", "r", encoding="utf") as f:
    data = json.load(f)
    ldata = list(data)

#Creating window
master = Tk()
master["background"] = "#01FEAA"
master.geometry("720x480")
master.title("Fighting Cuboid")
master.resizable(False, False)

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
    var2 = "Reset"
    cdata, cldata = data, ldata
    
def button(texts, tbox):
    """Put button"""
    global master
    
    select = []
    for text in texts:
        if (text != "Reset"):
            temp = Button(
                master,
                text=str(text),
                command=lambda i=text: selecta(
                    i
                )
            )
            
        else:
            temp = Button(
                master,
                text=str(text),
                command=lambda i=text: reset(
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
        temp = button(["Reset"], EndDummy(enda, endb))
        
    tbox = textbox(cldata[0])
    temp = button(cldata[1:] + ["Reset"], tbox)
    
    if str(temp) != "Reset":
        cdata = cdata[temp]
        cldata = list(cdata)