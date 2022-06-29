#include <iostream>
#include <cmath>
using namespace std;
int ordinario(int n)
{
    int num = 0;
    if (n < 10)
    {
        num = n;
    }
    else if (n < 100)
    {
        num = 9 + floor(num / 11);
    }
    else if (n < 1000)
    {
        num = 18 + floor(num / 111);
    }
    else if (n < 10000)
    {
        num = 27 + floor(num / 1111);
    }
    else if (n < 100000)
    {
        num = 36 + floor(num / 11111);
    }
    else if (n < 1000000)
    {
        num = 45 + floor(num / 111111);
    }
    else if (n < 10000000)
    {
        num = 64 + floor(num / 1111111);
    }
    else if (n < 100000000)
    {
        num = 72 + floor(num / 11111111);
    }
    else if (n < 100000000)
    {
        num = 81 + floor(num / 111111111);
    }


    return num;
}
int main(int argc, char const *argv[])
{
    int tC, num;
    cin >> tC;
    while (tC--)
    {
        cin >> num;
        cout << ordinario(num)<<endl;
    }
    return 0;
}
