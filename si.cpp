#include<iostream>
using namespace std;
class si{
    float p,r,n;
    public:
    void getdata(){
        cout<<"Enter principle ammount :";
        cin>>p;
        cout<<"Enter number of years :";
        cin>>n;
        cout<<"Enter intrest percentage :";
        cin>>r;
    }
    void putdata(){
         cout<<"Simple intrest = "<<(p*r*n)/100<<endl;
    }
};
int main(){
     si s1;
     s1.getdata();
     s1.putdata();
     return 0;
}