#include<iostream>
using namespace std;
int main(){
    int a,b;
    a = 20;
    b = (a++, a+200, a+300);
    cout<<b<<endl;
}