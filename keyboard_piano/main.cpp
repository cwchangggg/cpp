#include <iostream>
#include <iostream>
#include <stdio.h>
#include <windows.h> // for Beep()
#include <unistd.h> // for usleep()
#include <conio.h> // for _getch() //
#include <ctype.h>
using namespace std;

int main()
{
    /*--- beeping increasing pitches ---*/
    /*
    double pitch[]={
    0, 61.6, 277.2, 293.7, 311.1, 329.6, 349.2, 370.0, 392.0, 415.3, 440.0, 466.2, 493.9
    };
    double pitch2[]={
    0, 523.3, 554.4, 587.3, 622.3, 659.3, 698.5, 740.0, 784.0, 830.6, 880.0, 932.3, 987.8
    };
    */
    double pitch2[]={
    0, 523.3, 587.3, 659.3, 698.5, 784.0, 880.0, 932.3, 987.8
    };
    int music[] = {5, 3, 3, 0, 0, 0, 4, 2, 2, 0, 0, 0, 1, 2, 3, 4, 5, 5, 5, 0, 0, 0,
    5, 3, 3, 0, 0, 0, 4, 2, 2, 0, 0, 0, 1, 3, 5, 5, 1};

    int i;
    char x, y[8] = {'s','d','f','g','h','j','k','l'}; //definding notes
    int tone[8] = {523.3, 587.3, 659.3, 698.5, 784.0, 880.0, 987.8, 1046.5}; //beeping pitches
    cout << "Hello friend, let's play a song!" <<endl;
    cout << "--------------------------------" <<endl;
    cout << "press 'a' to play the song 'little -bee' automatically" <<endl;
    cout << "press 'z' to quit" <<endl;
    x = _getch();
    while(x != 'z'){ //press 'z' to quit
        if(x == 'a'){ //press 'a' to play the song "little-bee" automatically
            for(int t=0; t<39; t++){
                if(music[t]==0) usleep(150000);
                else Beep(pitch2[music[t]], 350);
            }
        }
        else{ //press the keys to play the pitches
            for(i=0; i<8; i++){
                if(y[i]==x) Beep(tone[i], 350);
            }
        }
        x = _getch();
    }
    return(0);
}
