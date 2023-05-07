//Homework #2 on Splitting into Bills
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

using namespace std;

int main()
{
    int money, $20, $10, $5, $1;
    cout << "Please enter an amount of money to split (INTEGER from 1 to 99 ONLY): ";
    cin >> money;
    //Sanity check (validity check).
    if(money > 99){
        cout << "You have entered an illegal value! " <<endl;
    }
    else if(money < 0 || money == 0){
        cout << "You have entered an illegal value! " <<endl;
    }
    else{
        $20 = money / 20;
        $10 = (money % 20) / 10;
        $5 = (money % 10) / 5;
        $1 = money % 5;
        cout << "20-dollar bill(s) = (" << $20 << ")" <<endl;
        cout << "10-dollar bill(s) = (" << $10 << ")" <<endl;
        cout << " 5-dollar bill(s) = (" << $5 << ")" <<endl;
        cout << " 1-dollar bill(s) = (" << $1 << ")" <<endl;
    }
    return 0;
}
