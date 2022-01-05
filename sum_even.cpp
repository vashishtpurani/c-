#include<iostream>
using namespace std;
int main(){
    int a,sum = 0;
    for(int i = 1;i<=20;i++){
        if(i%2==0){
            cout<<i<<"+"<<sum;
            sum+=i;
            cout<<"="<<sum<<endl;
            
        }
    }
    cout<<"the sum of even numbers between 0-20 is "<<sum<<endl;
}