try:
    import ujson as json
    
except (ModuleNotFoundError, ImportError):
    try:
        import simplejson as json
        
    except (ModuleNotFoundError, ImportError):
        import json
        
from tkinter import *
        
with open("game.json", "r") as f:
    data = json.load(f)
    ldata = list(data)
    
master = Tk()
master["background"] = "#01FEAA"
master.geometry("720x480")
master.title("Fighting Cuboid")

cdata, cldata = data, ldata
var = StringVar()
var2 = ""
    
text = Entry(master, width=700)
text.insert(0, cldata[0])
text.pack()

def selecta(i):
    global var, var2
    var.set(i)
    var2 = i

for item in cldata[1:]:
    select = Button(master, text=str(item), command=lambda i=item: selecta(i))
    select.pack()

master.wait_variable(var)
print(var2)
