//number of digits

#include<bits/stdc++.h>
using namespace std;

int main() {

    int a;
    cin>>a;
    int count=0;

    while(a>0){

        a=(a-(a%10))/10;
        count++;

    }

    cout<<count;

return 0;

}

//perfect