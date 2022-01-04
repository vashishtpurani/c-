#include<iostream>
using namespace std;
class circle{
    float a;
    public:
    void getdata(){
        cout<<"Enter radius :";
        cin>>a;
    }
    void putdata(){
         cout<<"circumference = "<<2*3.14*a<<endl;
         cout<<"area = "<<3.14*a*a<<endl;
    }
};
int main(){
     circle area;
     area.getdata();
     area.putdata();
     return 0;
}