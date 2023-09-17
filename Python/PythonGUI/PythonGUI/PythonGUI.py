from tkinter import *

root = Tk()

inputField=Entry(root,width=50,borderwidth=5)
inputField.pack()
inputField.insert(0,"Irasykite kazka")


def buttonClicked():
    clicked = Label(root,text=inputField.get())
    clicked.pack()


clickButton = Button(root, text="Press me",command=buttonClicked)
clickButton.pack()

root.mainloop()
