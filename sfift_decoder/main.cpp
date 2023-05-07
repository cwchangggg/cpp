#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#define SIZE 40
#include <string>

using namespace std;

int main()
{
    int i, j, k, t;

    char  in[SIZE],
    r1[12]={ 'q', 'w', 'e', 'r', 't', 'y', 'u', 'i', 'o', 'p', '[', ']' },
    r2[11]={ 'a', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l', ';', '"' },
    r3[10]={ 'z', 'x', 'c', 'v', 'b', 'n', 'm', '<', '>', '/' };
    for(i=0; i<SIZE; i++){
        in[i] = ' ';
    }
    cout << "Hello, please enter a word or a sentence!" << endl;
    scanf("%[^\n]", &in);
    cout << endl;
    cout << "This is the decoded words (sentence) :" << endl;
    for(i=0; i<SIZE; i++){
        //if(in[i]=='\n') break;
        if((in[i]==' ') ) cout << " ";
        else if(in[i]=='\n') break;
        else
        for(j=0; j<12; j++){
            if(in[i]==r1[j]){
            cout << r1[j-2];
            }
        }
        for(k=0; k<12; k++){
            if(in[i]==r2[k]){
            cout << r2[k-2];
            }
        }
        for(t=0; t<12; t++){
            if(in[i]==r3[t]){
            cout << r3[t-2];
            }
        }
    }
    cout << endl;
    //printf("%s\n", in);
    /*for(i=0; i<SIZE; i++){
        if(out[i]!='\n') break;
        else cout << out[i];
    }
    cout << endl;*/

    return 0;
}
