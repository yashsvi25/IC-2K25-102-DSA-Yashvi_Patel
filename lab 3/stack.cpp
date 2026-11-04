#include <iostream>
#define max 5
class stack{
    private:int a[max];
int n ,top;
    public: void push();
    void pop();
    void display();
    stack(){
        top= -1;
    }
};
void stack::push(){
    std::cout<<"enter elemnet to insert";
    std::cin>>n;
    if (top== max-1){
        std::cout<<"stack overflow";
    }
    else 
        top++;
    a[top]=n;
}
void stack::pop(){
    int d;
    if (top== -1){
        std::cout<<"no element";
    }
    else 
        d=a[top];
    top--;
    std::cout<<"item popped is "<<d;
    
}
void stack::display(){
    if (top==-1)
        std::cout<<"stack has no element";
    else
        for (int i=0;i<max;i++){
            std::cout<<a[i];
        }
}
int main(){
    stack s;
    int choice;
    char c;

    do{
        std::cout<<"/n 1.push 2.pop 3.display";
        std::cin>>choice;
       switch(choice){
           case 1 : s.push();
               break;
           case 2: s.pop();
               break;
           case 3 : s.display();
                break;
           
       }
        std::cout<<"do you want to continue";
           std::cin>>c;
    } while(c=='y'||c=='Y');
    
    
}

