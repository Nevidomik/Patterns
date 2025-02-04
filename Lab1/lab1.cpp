#include <iostream>
#include "math.h"

using namespace std;

double ctg(double);

int main(int argc, char const *argv[])
{
    double result;
    double x, k, a;

    cout << "Enter x: ";
    cin >> x;
    cout << "Enter k: ";
    cin >> k;

    result = (ctg((x+k)/(k+1)) - sqrt(abs(log(x) - log(k)) + 1.3))/(pow(sin(exp(-k)), 4)) + pow(asin(1/k), 2);

    cout << "r = " << result << endl << endl;

    double delta, max = 7;

    cout << "Enter x: ";
    cin >> x;
    cout << "Enter delta: ";
    cin >> delta;

    while(x < max){
        if(x < 0 && x != -1){
            result = exp(-2.5 * pow(x, 3)) + 1; 
        }
        else if(0 <= x && x <= 1){
            result = 2 * x;
        }
        else if(1 < x && x < 5.5){
            result = sqrt(abs(log10(x) - log(x)));
        }
        else if(x = -1 || x > 5.5){
            result = (x - 1) / (x - pow(sin(x), 2));
        }
        cout << "y = " << result << " | x = " << x << endl; 
        x += delta;
    }

    return 0;
}

double ctg(double a){
    double result;
    result = cos(a) / sin(a);
    return result;
}