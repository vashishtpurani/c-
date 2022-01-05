#include<iostream> 
using namespace std;
   
int x; //global x
   
int main()
{
  int x = 10; // Local x
  cout << "Value of global x is " << ::x;// :: is used to find variable outside scope.
  cout << "\nValue of local x is " << x;  
  return 0;
}