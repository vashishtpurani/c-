#include<iostream>
using namespace std;
int l;
class area{
    public:
    void ara(){
        float a;
        cout<<"Enter the length :";
        cin>>l;
        a=l*l;
        cout<<"The area of square is "<<a<<endl;
    }
    void perimeter(){
        float p;
        cout<<"Enter the length :";
        cin>>l;
        p=4*l;
        cout<<"The Perimeter of Square is "<<p<<endl;    
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
    int a;
    do{
        cout<<"1.area \n2.perimeter \n3.exit"<<endl;
        cout<<"Enter your choice :";
        cin>>a;
        area a1;
        switch(a){

            case 1:
            a1.ara();
            break;

            case 2:
            a1.perimeter();
            break;

            case 3:
            break;

            default:
            cout<<"Invalid Choice!!"<<endl;

        }

    }
    while(a!=3);
}