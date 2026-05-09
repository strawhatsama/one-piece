#include <iostream>
using namespace std;

void solve(int outer)

{ int inner=1;

    while( inner<=outer)

    { cout<< inner<<" ";
        inner++;

    }
}

    int main()

    { int outer=1;

        while(outer>0)

        { solve(outer);

            outer++;

            cout<< outer<<"\n";

        }
       return 0;

    }

    /*This is an example of nested loop
    
    It means :
    
    
    If outer loop runs exactly once the inner loop completes its entire  cycle*/
    