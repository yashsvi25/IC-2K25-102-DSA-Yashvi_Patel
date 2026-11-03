#include <iostream>
#define max 5
int a[max];
int i ,j,temp;
void display(){
    std::cout<<"enter elemeent in array";
    for(int i=0;i<max;i++){
        std::cin>>a[i];
    }
}
void searching(){
    for(int i=1;i<max;i++){
        temp=a[i];
        j=i-1;
    }
    while(j>=temp&&a[j]>temp){
        a[j+1]=a[j];
        j--;
    }
    a[j+1]=temp;
}
void aftersearch(){
    searching();
    for(int i=0;i<max;i++){
        std::cout<<a[i];
    }
}
int main(){
    display();
    searching();
    aftersearch();
    return 0;
}
