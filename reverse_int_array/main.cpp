#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#define SIZE 9 //Changing the size of array by changing this

using namespace std;

int i, origin[SIZE];
void reverse_array()
{
    for(i=0; i<(SIZE/2); i++){
        swap(origin[i], origin[(SIZE-1)-i]);
    }
}
void swap(int &a, int &b)
{
    int reg = a;
    a = b;
    b = reg;
}
int main()
{
    cout << "This is a function to reverse an integer array on the place." << endl;
    printf("Original randomly generated Array:");
    for(i=0; i<SIZE; i++){
        origin[i] = rand() % 20;
        printf("%2d ", origin[i]);
    }
    printf("\nArray after the reversal         :");
    reverse_array();
    for(i=0; i<SIZE; i++){
        printf("%2d ", origin[i]);
    }
    printf("\n");
    return 0;
}





