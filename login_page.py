from tkinter import*
from PIL import ImageTk
from tkinter import messagebox
class login_system:
    def __init__(self,root):
        self.root=root
        self.root.title("LOGIN SYSTEM \n MADE BY YASH")
        self.root.geometry("1199x600+100+50")
        self.root.resizeable(False,False)
        
        self.bg=ImageTk.PhotoImage(file="C:/Users/syash/Python_Prog/rm.jpg")
        self.bg_image=Label(self.root,image=self.bg).place(x=0,y=0,relwidth=1,relheight=1)
        
        Frame_login=Frame(self.root,bg="black")
        Frame_login.place(x=150,y=150,height=340,width=500)
        
        title=Label(Frame_login,text="Login here",font=("Times new roman",40,"bold"),fg="green",bg="grey").place(x=90,y=30)
        desc=Label(Frame_login,text="Students Login Area",font=("Times new roman",40,"italic"),fg="orange",bg="grey").place(x=90,y=100)
        
        
        lbl_user=Label(Frame_login,text="Username",font=("Goudy old styles",20,"bold"),fg="red",bg="grey").place(x=90,y=140)
        self.txt_user=Entry(Frame_login,font=("Times new roman",20,"bold"),bg="black")
        self.txt_user.place(x=90,y=170,width=350,height=35)
        
        lbl_pass=Label(Frame_login,text="Password",font=("Goudy old styles",20,"bold"),fg="red",bg="grey").place(x=90,y=210)
        self.txt_pass=Entry(Frame_login,font=("Times new roman",20,"bold"),bg="black")
        self.txt_pass.place(x=90,y=240,width=350,height=35)
        
        forget_btn=Button(Frame_login,cursor="hand2",text="Forgot Password",bg="grey",fg="yellow",bd=0,font=("Times new roman",15)).place(x=90,y=290)
        Login_btn=Button(self.root,command=self.login_function,cursor="hand2",text="LOGIN",fg="red",bg="yellow",font=("Times new roman",25)).place(x=300,y=470,width=180,height=40)
        
        
    def login_function(self):
        if self.txt_pass.get()=="" or self.txt_user.get()=="":
            messagebox.showerror("Eror","PLease fill all the fields",parent=self.root)
        elif self.txt_pass.get()!="221100" or self.txt_user.get()!="Yash":
            messagebox.showerror("Eror","Wrong username or password",parent=self.root)
        else:
            messagebox.showinfo("Welcome",f"Welcome{self.txt_user.get()}\n Your password: {self.txt_pass.get()}",parent=self.root)
            
            
            
            

root= Tk()
obj=login_system(root)
root.mainloop() 