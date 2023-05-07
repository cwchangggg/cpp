#include <iostream>
#include <stdio.h>
#define SIZE 9

using namespace std;

int main()
{
    int num[SIZE], num2[SIZE];
    cout << "Hello world!" << endl;
    printf("Multiplication_table: \n");
    for(int i = 0; i < SIZE; i++){
        num[i] = i + 1;
        for(int j=0; j<SIZE; j++){
            num2[j] = j + 1;
            printf("%2d*%2d=%3d |", num2[j] ,num[i], num[i]*num2[j]);
        }
    printf("\n");
    }
    return 0;
}
