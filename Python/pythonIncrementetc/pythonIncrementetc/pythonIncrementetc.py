from tkinter import *
import random

def up():
    number.set(number.get()+1)

def down():
    number.set(number.get()-1)

def colour_list():
    buttoncolor.configure(bg=random.choice(colors))

def random_number():
    buttonrandom.configure(text=random.choice(numbers))

window = Tk()
window.geometry('150x150')
number = IntVar()
colors=["red","green","purple","yellow","blue","orange"]
numbers=[1,2,3,4,5,6]

frame = Frame(window)
frame.pack()

entry = Label(frame, textvariable=number, justify='center',height=1,width=1)
entry.pack(side=TOP,ipady=20)

buttonup = Button(text="+", command=up,background="yellow",fg='black')
buttonup.pack(side=LEFT,ipady=20,ipadx=30)

buttondown = Button(text="-", command=down,background="green",fg="black")
buttondown.pack(side=RIGHT,ipady=20,ipadx=30)

buttoncolor=Button(frame,text="Spalva",command=colour_list)
buttoncolor.pack(side=BOTTOM,ipadx=20)

buttonrandom=Button(frame,text="RANDOM",command=random_number)
buttonrandom.pack(side=BOTTOM,ipadx=20)

window.mainloop()