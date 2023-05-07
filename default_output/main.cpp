#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.14

using namespace std;

int main()
{
    float radius, surface_area, volume;
    cout << "Hello, please enter the radius of a sphere(in meter): ";
    cin >> radius;
    //Prevent users from entering unexpected values.
    if(radius > 8.0e+37){
        cout << "You have entered an illegal value! " <<endl;
    }
    else if(radius < 0 || radius == 0){
        cout << "You have entered an illegal value! " <<endl;
    }
    else{
        surface_area = 4 * PI * pow(radius, 2),
        volume = 4 * PI * pow(radius, 3) / 3;
        cout << "The surface area of the sphere is: " <<  surface_area << "square meter." <<endl;
        cout << "The volume of the sphere is: " << volume << "cubic meter." <<endl;
    }
    return 0;
}

