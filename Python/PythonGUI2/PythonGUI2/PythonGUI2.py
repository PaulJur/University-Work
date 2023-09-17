from tkinter import *

root = Tk()

inputField=Entry(root,width=40,bg='white',fg='black')
inputField.pack()
inputField.insert(0,"Koks jūsų vardas?")


def buttonClicked():
    clicked = Label(root,text=inputField.get())
    clicked.pack()


clickButton = Button(root, text="Spaustelėkite čia",command=buttonClicked,height=25,width=50,bg='white',fg='blue')
clickButton.pack()

root.mainloop()