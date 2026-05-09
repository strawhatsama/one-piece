// print true if x=y false otherwise 

#include <iostream>
using namespace std;

bool solve( int x , int y) // why did i use bool solve?

{ return x==y;}

// take inputs define x and y

int main()

{ int x{} ;
    cin>>x;
    int y{} ;
    cin>>y;

    cout<<boolalpha;
    cout<<solve(x,y);

    return 0;}

// i used cout<<solve and it always printed true ??
// because solve is simply meant to return x==y ?? is this the reason ? nah

/*When i write cout<<solve ; 

the function finds out something named solve exists hence a non zero memory address 

and hence prints true .

By writing solve(x,y) m we say that look inside and see what's the command*/