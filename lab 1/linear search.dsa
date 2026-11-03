#include <iostream>
#define max 5
class ls{
    private: int a[max];
    int i;
 public : ls(){
     std::cout<<"enter elements in array";
     for(i=0;i<max;i++){
         std::cin>>a[i];
     }
 }
     void search();
    void display();
 
};
void ls::search(){
    int x;
    std::cout<<"enter element to find";
    std::cin>>x;
    for(i=0;i<max;i++){
        if(a[i]==x){
           break;
        }
    }
    if(a[i]==x){
        std::cout<<"element find"<<i;
    }
    else{
        std::cout<<"elemnt not found";
        }
 
}
void ls::display(){
    for(int i=0;i<max;i++){
       std:: cout<<a[i];
    }
}
int main(){
    ls l;
    char c;
    int choice;
  do{
      std::cout<<"\n 1.search(),2.display()";
      std::cin>>choice;
      switch(choice){
          case 1: l.search();
          break;
          case 2: l.display();
          break;
 
      }
      std::cout<<"do you want to continue"<<std::endl;
      std::cin>>c;
  }
      while (c=='Y'||c=='y');
}
