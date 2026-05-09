// Write a code to find max from a list 

#include<iostream>
using namespace std;

void max()
{ int n,i;
  cin>>n;

  int prev;
  cin>>prev;
int item_box=prev;
for(i=1;i<n;i++)

{ int cur;
    cin>>cur;

 if(cur>prev)
 { item_box=cur;
 }
 // is the loop dying here
prev=cur;

}

cout<< item_box;

}

int main()

{ max();

    return 0;

}