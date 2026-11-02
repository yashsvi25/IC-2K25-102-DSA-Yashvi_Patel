#define max 5
class bs{
    private: int a[max];
    int i,ll,ul,mid;
 public : bs(){
     std::cout<<"enter elements in array";
     for(i=0;i<max;i++){
         std::cin>>a[i];
     }
 }
     void search();
    void display();
 
};
void bs::search(){
    int x,flag;
    ll=0;
    ul=max-1;
    mid=(ll+ul)/2;
    std::cout<<"give element to found";
    std::cin>>x;
    for(int i=0;i<max;i++){
    if(a[mid]==x){
        flag= 1;
    }
    if(ll<a[mid]){
        ll=mid+1;
    }
    else{
        ul=mid-1;
    }
    }
    if(flag==1){
        std::cout<<"element found at"<<mid;
    }
    else{
        std::cout<<"element not found";
    }
}

void bs::display(){
    for(int i=0;i<max;i++){
       std:: cout<<a[i];
    }
}
int main(){
    bs b;
    char c;
    int choice;
  do{
      std::cout<<"\n 1.search(),2.display()";
      std::cin>>choice;
      switch(choice){
          case 1: b.search();
          break;
          case 2: b.display();
          break;
 
      }
      std::cout<<"do you want to continue"<<std::endl;
      std::cin>>c;
  }
      while (c=='Y'||c=='y');
}
