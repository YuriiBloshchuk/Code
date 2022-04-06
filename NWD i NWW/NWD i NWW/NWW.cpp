

#include <iostream>
using namespace std;

int NWD(int a, int b)
{
    while (a != b)
        if (a > b)
            a = a - b;
        else
            b = b - a;
    return a;
}

int main()
{
    int liczba1, liczba2;
    cout << "Podaj pierwsza liczbe: ";
    cin >> liczba1;
    cout << "Podaj druga liczbe: ";
    cin >> liczba2;
    cout << "NWW(" << liczba1 << "," << liczba2 << ") = " << (liczba1 * liczba2) / NWD(liczba1, liczba2) << endl;

    return 0;
}