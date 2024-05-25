from tkinter import *
wimdow=Tk()
photo=PhotoImage(file='IMG-20220116-WA0002.jpg')

wimdow.config(background="yellow")
label=Label(wimdow,text="its yellow colour",font=('Areal',20,'italic','bold'),fg='#FF00FF',bg='white',image=photo)
label.place(x=0,y=10)
wimdow.mainloop()
