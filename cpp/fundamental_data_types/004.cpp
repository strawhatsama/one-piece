/*We want to use a function value in some other function*/


#include <iostream>
using namespace std;

int value()
{ // define an integer x and y 

    int x;
    //take input 

    cin>>x;
    // return

    return x;} // value is returned 

// How do i use the inputs x and y ??

int main()

{ int num(value());

    cout << value()*2;

    return 0;}
// it is not happening in one step i need to enter x twice , why??
// we are calling the function twice 
