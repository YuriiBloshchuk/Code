
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
    int a, b;
    cout << "Podaj dwie liczby:";
    cin >> a >> b;
    cout << NWD(a, b) << endl;
    return 0;
}

