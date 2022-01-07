#include<iostream>
using namespace std;
int main(){
    int var;
    int *poi;
    int val;

    var = 500;
    poi = &var;
    val = *poi;

    cout << "Value of var :" << var << endl;
    cout << "Value of poi :" << poi << endl;
    cout << "Value of val :" << val << endl;

}