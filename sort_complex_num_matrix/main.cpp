#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#define ROW_SIZE 4
#define COL_SIZE 4

using namespace std;

//Define a class of complex number
class complex_number {
    private:
        double re, img;
    public:
        double get_re(){ return re;};
        double get_img(){ return img;};
        void set_re(double x){ re=x; };
        void set_img(double y) { img = y; };
};

void swap(int& a, int& b);

int main()
{
    cout << "Original Matrix of Complex Numbers " << endl;
    int row, col, f, i, row_next, col_next;
    double x, y;
    complex_number cn_array[ROW_SIZE][COL_SIZE];
    //setting a matrix
    for(row=0; row<ROW_SIZE; row++){
         for(col=0; col<COL_SIZE; col++){
            x = (double) (rand()%10);
            y = (double) (rand()%10);
            cn_array[row][col].set_re(x);
            cn_array[row][col].set_img(y);
            cout << cn_array[row][col].get_re() << "+j" << cn_array[row][col].get_img() << "  ";    //check
         }
         cout << endl;    //check
    }
    cout << endl;

    row = 0;
    col = 0;

    //Using Bubble Sort
    for(f=(ROW_SIZE*COL_SIZE)-1; f>0; f--){

        for(i=0; i<f; i++){
            row = i / COL_SIZE;
            col = i % COL_SIZE;
            row_next = ( i+1 ) / COL_SIZE;
            col_next = ( i+1 ) % COL_SIZE;

            if(cn_array[row][col].get_re() > cn_array[row_next][col_next].get_re()){
                swap(cn_array[row][col], cn_array[row_next][col_next]);
            }
            else if(( cn_array[row][col].get_re() == cn_array[row_next][col_next].get_re() ) && ( cn_array[row][col].get_img() > cn_array[row_next][col_next].get_img() )){
                swap(cn_array[row][col], cn_array[row_next][col_next]);
            }
        }
    }

    cout << "Sorted Matrix of Complex Numbers " << endl;
    for(row=0; row<ROW_SIZE; row++){
         for(col=0; col<COL_SIZE; col++){
            cout << cn_array[row][col].get_re() << "+j" << cn_array[row][col].get_img() << "  ";    //
         }
         cout << endl;    //
    }
    return 0;
}

void swap(int& a, int& b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

