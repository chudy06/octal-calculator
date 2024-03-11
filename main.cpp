#include <iostream>

using namespace std;

int suma_oktalna(int a, int b)
{
    int suma = 0, liczba = 0, przeniesc = 0, pozycja = 1;
    while (a > 0 || b > 0 || przeniesc)
    {
        liczba = a % 10 + b % 10 + przeniesc;
        // czy mamy przeniesienie
        if (liczba > 7)
        {
            przeniesc = 1;
            liczba %= 8;
        }
        else
            przeniesc = 0;
        suma += liczba * pozycja;
        pozycja *= 10;
        a /= 10;
        b /= 10;
    }
    return suma;
}
int main()
{
    int a,b;
    cout << "Podaj liczbe osemkowa a : " << endl;
    cin >> a;
    cout << "Podaj liczbe osemkowa b : " << endl;
    cin >> b;
    cout << suma_oktalna(a, b);
    return 0;
}
