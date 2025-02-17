#include <iostream>
#include "math.h"

using namespace std;

double ctg(double);
double task2(double, double);

int main(int argc, char const *argv[])
{
    double result;
    double x, k, a;

    cout << "Enter x: ";
    cin >> x;
    cout << "Enter k: ";
    cin >> k;

    result = (ctg((x+k)/(k+1)) - sqrt(abs(log(x) - log(k)) + 1.3))/(pow(sin(exp(-k)), 4)) + pow(asin(1/k), 2);

    cout << "Task 1. \nr = " << result << endl << endl;

    int max = 7;
    double delta;
    cout << "Task 2.\n";
    cout << "Enter x: ";
    cin >> x;
    cout << "Enter delta: ";
    cin >> delta;
    while (x < 7)
    {
        task2(x, delta);
    }

        return 0;
    }

double ctg(double a){
    double result;
    result = cos(a) / sin(a);
    return result;
}

double task2(double x, double delta){
    double result;

    if (x < 0 && x != -1)
    {
        result = exp(-2.5 * pow(x, 3)) + 1;
        cout << "r = e^(-2.5*x^3) + 1 = " << result;
    }
    else if (0 <= x && x <= 1)
    {
        result = 2 * x;
        cout << "r = 2 * x = " << result;
    }
    else if (1 < x && x < 5.5)
    {
        result = sqrt(abs(log10(x) - log(x)));
        cout << "r = sqrt(|lg x - ln x|) = " << result;
    }
    else if (x = -1 || x > 5.5)
    {
        result = (x - 1) / (x - pow(sin(x), 2));
        cout << "r = x - 1 / x - sin^2 x = " << result;
    }
    cout << "  | x = " << x << endl;
    x += delta;


    return result;
}