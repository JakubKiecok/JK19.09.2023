#include <iostream>
#include <math.h>
using namespace std;
void opisKalkulatora();//deklaracja funkcji nic nie zwracającej
float dodawanie(float l1, float l2);
float odejmowanie(float l1, float l2);
float mnozenie(float l1, float l2);
void dzielenie(float l1, float l2);
double pierwiastekliczba1(float l1);
double pierwiastekliczba2(float l2);
double potegowanie(float l1, float l2);
int main()
{
    float liczba1, liczba2;
    opisKalkulatora();
    cout << "Podaj liczba1 = "; cin >> liczba1;
    cout << "Podaj liczba2 = "; cin >> liczba2;
    cout << "Dodawanie = " << dodawanie(liczba1, liczba2) << endl;
    cout << "Odejmowanie = " << odejmowanie(liczba1, liczba2) << endl;
    cout << "Mnozenie = " << mnozenie(liczba1, liczba2) << endl;
    dzielenie(liczba1, liczba2);
    cout << "Pierwiastek L1 = " << pierwiastekliczba1(liczba1) << endl;
    cout << "Pierwiastek L2 = " << pierwiastekliczba2(liczba2) << endl;
    cout << "Potęgowanie = " << potegowanie(liczba1, liczba2) << endl;
    system("pause");
}

//definicja funkcji wczesniej zadeklarowanej
void opisKalkulatora() {
    cout << "Jakub Kiecok: Ver 2 Kalkulator" << endl;
}

float dodawanie(float l1, float l2)
{
    return l1 + l2;
}

float odejmowanie(float l1, float l2)
{
    return l1 - l2;
}

float mnozenie(float l1, float l2)
{
    return l1 * l2;
}

void dzielenie(float l1, float l2)
{
    if (l2 == 0) {
        cout << "Nie dziel szlachcicu przez 0" << endl;
    }
    else
    {
        cout << "Dzielenie = " << l1 / l2 << endl;
    }
}

double pierwiastekliczba1(float l1)
{
    if (l1 >= 0) return sqrt(l1);
}

double pierwiastekliczba2(float l2)
{
    if (l2 >= 0) return sqrt(l2);
}

double potegowanie(float l1, float l2)
{
    return pow(l1, l2);
}