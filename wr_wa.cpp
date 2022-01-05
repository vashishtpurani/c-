#include<iostream>
using namespace std;
int l;
class area{
    public:
    int ara(int l){
        int a;
        a=l*l;
        return a;
    }
    int perimeter(int l){
        int p;
        p=4*l;

        return p;  
    }
};
/*
void::area(){
    float a;
    cin>>l;
    a=l*l;
    cout<<a<<endl;
}
void::perimeter(){
    float p;
    cin>>l;
    p=4(l);
    cout<<p<<endl;
}
*/
int main(){
    int a,b;
    do{
        cout<<"1.area \n2.perimeter \n3.exit"<<endl;
        cout<<"Enter your choice :";
        cin>>a;
        area a1;
        switch(a){

            case 1:
            cout<<"Enter the length :";
            cin>>l;
            b = a1.ara(l);
            cout<<"The area of square is "<<b<<endl<<endl;
            break;

            case 2:
            cout<<"Enter the length :";
            cin>>l;
            b= a1.perimeter(l);
            cout<<"The Perimeter of Square is "<<b<<endl<<endl;  
            break;

            case 3:
            break;

            default:
            cout<<"Invalid Choice!!"<<endl;

        }

    }
    while(a!=3);
}