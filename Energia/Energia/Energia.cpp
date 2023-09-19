#include <iostream>
#include <math.h>
using namespace std;
int g = 10;
float Em(float m, float v, float h);
float Ek(float m, float v);
float Ep(float m, float h);

int main()
{
    float m, v, h;
    cout << "Podaj mase = "; 
    cin >> m;
    cout << "Podaj prędkosc = ";
    cin >> v;
    cout << "Podaj wysokosc = ";
    cin >> h;
    cout << "Energia mechaniczna wynosi = " << Em(m, v, h) << endl;
    cout << "Energia kinetyczna wynosi = " << Ek(m, v) << endl;
    cout << "Energia potencjalna wynosi = " << Ep(m, h) << endl;
}

float Em(float m, float v, float h)
{
    return (m * pow(v, 2)) / 2 + m * h * g;
}

float Ek(float m, float v)
{
    return (m * pow(v, 2) / 2);
}

float Ep(float m, float h)
{
    return m * h * g;
}
