#include<iostream> 
using namespace std;
class ope{
    public:

    int a ;
    int b ;

    void and1();
    void or1();
    void xor1();
    void twos();
    void ls();
    void rs();
};
    void ope :: and1(){
        cout<<"a & b = "<<(a&b)<<endl;
    }
    void ope :: or1(){
        cout<<"a | b = "<<(a|b)<<endl;
    }
    void ope :: xor1(){
        cout<<"a ^ b = "<<(a^b)<<endl;
    }
    void ope :: twos(){
        cout << "~(" << a << ") = " << (~a) << endl;
        cout << "~(" << b << ") = " << (~b) << endl;
    }
    void ope :: ls(){
        cout<<"a << b = "<<(a<<b)<<endl;
    }
    void ope :: rs(){
        cout<<"a >> b = "<< (a>>b) <<endl;
    }


int main(){
    ope a1;
    cout<<"Enter the value of a :";
    cin>>a1.a;
    cout<<"Enter the value of b :";
    cin>>a1.b;
    cout<<"a = "<<a1.a<<endl;
    cout<<"b = "<<a1.b<<endl;
    
    a1.and1();
    a1.or1();
    a1.xor1();
    a1.twos();
    a1.ls();
    a1.rs();
}