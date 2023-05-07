#include <iostream>
#include <fstream>
#include <stdio.h>
#include <string>
#include <string.h>
#include <vector>
#include <algorithm>
#define MOST_FREQ 10
#define DEBUG 0


using namespace std;

void pal(string cpp_line, vector<string> &A);
void paw(string cpp_word, vector<string> &A);

int wc[100000];

void swap(int& a, int& b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

void swap2(string& a, string& b)
{
    string temp;
    temp = a;
    a = b;
    b = temp;
}

//ofstream wd("wd.txt", ios::out);
int main(int argc, char **argv)
{

    if(argc!=2){
        cout << "Too few arguments" << endl;
        printf("Usage: %s <filename>\n", argv[0]);
        exit(-1);

    }
    ifstream inFile(argv[1], ios::in);
    if(!inFile) {
        printf("Can't find %s \n", argv[1]);
        exit(-1);
    }
    string cpp_line;
    int line_count=0;

    vector<string> A;
    string p;

    getline(inFile, cpp_line);

    while(!cpp_line.empty()){
        if(DEBUG > 0){
            printf("The %d-th line: \n", line_count);
            cout << cpp_line << endl;
        }
        pal(cpp_line, A);
        line_count++;
        getline(inFile, cpp_line);
    }
    cout << "Total no. of lines: " << line_count << endl;
    cout << "The total number of words in ¡§picasso.txt¡¨:" << A.size() << endl;
    // Sort the vector (counts, words)
    //sort(A.begin(), A.end(), compare );
    //Bubble sort
    for(int LIM=A.size()-1; LIM>0; LIM--){

        for(int i=0; i<LIM; i++){

            if(wc[i] < wc[i+1]){
                swap(wc[i], wc[i+1]);
                swap2(A[i], A[i+1]);

            }

        }
    }


    for(int t=0; t<MOST_FREQ; t++){
        if(t==0) printf("The %dst most frequent word is (%s) with no. of appearances (%d) \n", (t+1), A[t].c_str(), wc[t]);
        else if(t==1) printf("The %dnd most frequent word is (%s) with no. of appearances (%d) \n", (t+1), A[t].c_str(), wc[t]);
        else if(t==2) printf("The %drd most frequent word is (%s) with no. of appearances (%d) \n", (t+1), A[t].c_str(), wc[t]);
        else printf("The %dth most frequent word is (%s) with no. of appearances (%d) \n", (t+1), A[t].c_str(), wc[t]);
    }

    return 0;
}
    //pal = process a line
void pal(string cpp_line, vector<string> &A)
{
    char c_line[100000], *word;
    string cpp_word;

    if(cpp_line == "\n") {cout << "An empty line!" ; }
    strcpy(c_line, cpp_line.c_str());
    word = strtok(c_line, "\" :;.,-()");     //1 by 1
    while(word!=0){
        // paw = process a word here --> vector
        cpp_word = word;
        paw(cpp_word, A);
        word = strtok(NULL, "\" :;.,-()");
   }
}

void paw(string cpp_word, vector<string> &A)
{
    bool exist = false;
    string p;
    int i;

    for(i=0; i<(int)A.size(); i++){
        if(cpp_word==A[i]){
            exist = true;
            wc[i]= wc[i]+1;
            break;
        }
    }
    if(exist == false){
        A.push_back(cpp_word);
        wc[i] = 1;
    }
}



