#include<iostream>
using namespace std;
// --- The Function(The Action) ---
/*Notice how it has to ask for the array the size and the capacity 
because it does not own any of them*/

void push_back_function(int*arr, int&current_size, int capacity , int value)

{ if(current_size<capacity)

    { arr[current_size]=value;
        current_size++;
    }

    else
    { cout<< "Error , Out of memory";
    }
}

int main()

{ // you have to manage all the state manually 

    

    int capacity=100;
    int *my_array = new int[capacity];
    int current_size=0;

push_back_function(my_array, current_size, capacity,10);
push_back_function(my_array,current_size, capacity , 15);
push_back_function(my_array, current_size , capacity, 20);