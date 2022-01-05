#include<iostream>
using namespace std;
int l;
class area{
    public:
    int ara(){
        cout<<"Enter the length :";
        cin>>l;
        int a;
        a=l*l;
        return a;
    }
    int perimeter(){
        cout<<"Enter the length :";
        cin>>l;
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
            b = a1.ara();
            cout<<"The area of square is "<<b<<endl<<endl;
            break;

            case 2:
            b = a1.perimeter();
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