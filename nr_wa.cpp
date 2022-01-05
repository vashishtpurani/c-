#include<iostream>
using namespace std;
int l;
class area{
    public:
    void ara(int l){
        float a;
        a=l*l;
        cout<<"The area of square is "<<a<<endl<<endl;
    }
    void perimeter(int l){
        float p;
        p=4*l;
        cout<<"The Perimeter of Square is "<<p<<endl<<endl;    
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
            a1.ara(l);
            break;

            case 2:
            cout<<"Enter the length :";
            cin>>l;
            a1.perimeter(l);
            break;

            case 3:
            break;

            default:
            cout<<"Invalid Choice!!"<<endl;

        }

    }
    while(a!=3);
}