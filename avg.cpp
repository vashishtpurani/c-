#include<iostream>
using namespace std;
class avg{
    float a,b,c;
    public:
    void getdata(){
        cout<<"Enter value of a :";
        cin>>a;
        cout<<"Enter value of b :";
        cin>>b;
        cout<<"Enter value of c :";
        cin>>c;
    }
    void putdata(){
         cout<<"average of a,b,c = "<<(a+b+c)/3<<endl;
    }
};
int main(){
     avg a1;
     a1.getdata();
     a1.putdata();
     return 0;
}