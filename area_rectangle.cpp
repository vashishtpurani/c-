#include<iostream>
using namespace std;
class rectangle{
    int a,b;//data member
    public:
    void getdata(){
        cout<<"Enter length :";
        cin>>a;
        cout<<"Enter breath :";
        cin>>b;
    }
    void putdata(){
         cout<<"perimeter = "<<2*(a+b)<<endl;
         cout<<"area = "<<a*b<<endl;
    }
};
int main(){
     rectangle area, perimeter;
     area.getdata();
     area.putdata();
     return 0;
}