#include <iostream>
#include <cmath>
using namespace std;
int ordinario(int n)
{
    if (n < 10)
    {
        return n;
    }
    else if (n < 100)
    {
        return 9 + floor(n / 11);
    }
    else if (n < 1000)
    {
        return 18 + floor(n / 111);
    }
    else if (n < 10000)
    {
        return 27 + floor(n / 1111);
    }
    else if (n < 100000)
    {
        return 36 + floor(n / 11111);
    }
    else if (n < 1000000)
    {
        return 45 + floor(n / 111111);
    }
    else if (n < 10000000)
    {
        return 64 + floor(n / 1111111);
    }
    else if (n < 100000000)
    {
        return 72 + floor(n / 11111111);
    }
    else if (n < 100000000)
    {
        return 81 + floor(n / 111111111);
    }
}
int main(int argc, char const *argv[])
{
    int tC, n;
    cin >> tC;
    while (tC--)
    {
        cin >> n;
        cout << ordinario(n) << endl;
    }

    return 0;
}
