#include<iostream>
using namespace std;
class gls{
    int a,b;//data member
    public:
    void getdata(){
        cout<<"Enter value of a";
        cin>>a;
        cout<<"Enter value of b";
        cin>>b;
    }
    void putdata(){
         cout <<"a = "<<a<<endl<<"b = "<<b<<endl;
         cout<<"a + b ="<<a+b<<endl;
         cout<<"a - b ="<<a-b<<endl;
         cout<<"a / b ="<<a/b<<endl;
         cout<<"a % b ="<<a%b<<endl;
         cout<<"a * b ="<<a*b<<endl;
    }
};
int main(){
     gls s1,s2;
     s1.getdata();
     s1.putdata();
     s2.getdata();
     s2.putdata();
     return 0;
}