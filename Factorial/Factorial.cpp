#include <iostream>
using namespace std;
int main()
{
    int x;
    cout << "Enter The Num : ";
    cin >> x;
    int y = x;
    for (int i = 1; i < y; i++)
    {
        x = x * i;
    }
    cout << x;
}