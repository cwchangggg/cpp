#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#define N 4

using namespace std;
int factorial(int n);
void swap(int& a, int& b);
void per(int begin, int end, int a[]);

int count = 1;

int main()
{
    int total, a[N];

    total = factorial(N);
    for(int i=0; i<N; i++){
        a[i] = i;
        }
    per(a[0], a[N-1], a);
    cout << "There are " << total << " permutations in total! " << endl;
    return 0;
}

int factorial(int n)    //n! = n*(n-1)*(n-2)...*1
{

    if(n==0) return(1);
    if(n==1) return(1);
    else return(factorial(n-1)*n);
}

void swap(int& a, int& b)
{

    int temp;
    temp = a;
    a = b;
    b= temp;


}

void per(int begin, int end, int a[]) {


    if (begin == end) {
        cout << "The " << count << "-th Pattern: (";
        for (int i = 0; i < end+1; i++){    //<= n+1
            cout << a[i] << ' ';

        }
        cout << ")" << endl;
        count++;
        return;
    }
    for (int i = begin; i < end+1; i++) {
        swap(a[begin], a[i]);
        per(begin + 1, end, a);
        swap(a[i], a[begin]);
    }
}
