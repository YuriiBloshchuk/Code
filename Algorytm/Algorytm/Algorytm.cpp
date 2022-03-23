#include<iostream>
using namespace std;
bool czy_pierwsza(int n)
{
	if (n < 2)
		return false;
	for (int i = 2; i * i <= n; i++)
		if (n % i == 0)
			return false;
	return true;
}
int main()
{
	int a = 0;
	int b = 0;
	int n = 2;
	cout << "Podaj liczbe: ";
	cin >> a;
	while  (b < a)
	{
		if (czy_pierwsza(n))
		{
			cout << n << " ";
			n++;
			b++;
		}
		else
			n++;
		
	}
	return 0;
}