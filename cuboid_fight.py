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
master.resizable(False, False)

cdata, cldata = data, ldata
var = StringVar()
var2 = ""

def textbox(text):
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
    global var, var2
    var.set(i)
    var2 = i
    
def button(texts, tbox):
    global master
    
    select = []
    for text in texts:
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

while True:
    tbox = textbox(cldata[0])
    temp = button(cldata[1:], tbox)
    cdata = cdata[temp]
    cldata = list(cdata)
    
    if cdata == cldata:
        textbox("`".join(cldata[0].split("`")[:~0]))
        textbox(cldata[0].split("`")[~0])
        
        break
