#include<iostream>
#include<algorithm>
using namespace std;
const short SIZE = 256;
int main() {
    char* a = new char[SIZE];
    char* b = new char[SIZE];
    cin.getline(a, SIZE);
    cin.getline(b, SIZE);
    sort(a, a + strlen(a));
    sort(b, b + strlen(b));
    cout << (strcmp(a, b) == 0 ? "YES" : "NO");
}