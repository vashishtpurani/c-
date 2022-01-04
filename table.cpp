#include<iostream>
using namespace std;
class table{
    float a;
    public:
    void getdata(){
        cout<<"Enter a number :";
        cin>>a;
    }
    void putdata(){
         for(int i=1;i<=10;i++){
             cout<<a<<" * "<<i<<" = "<<a*i<<endl;
         }
    }
};
int main(){
     table t1;
     t1.getdata();
     t1.putdata();
     return 0;
}