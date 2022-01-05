#include<iostream>
using namespace std;
int main(){
    wchar_t wchar = 'A';//prints ascii value of char.
    wchar_t str [] = L"Hello!!";
    cout<<wchar<<endl;
    cout<<"---------------------------------------------"<<endl;
    cout<<str<<endl;
    wcout<<str<<endl;
}