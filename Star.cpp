#include<iostream>
using namespace std;
int main()
{
    int i, j;
    int n = 0;
    cout << "Enter The Num * : ";
    cin >> n;

    if (n<=19)
    {

        cout << "\n\n";

        for (i = 1; i <= n; i++)
        {
        cout.width(n - i);
        cout.fill(' ');
        cout << "";

        for (j = 1; j <= i; j++)
            std::cout << "* ";

        cout.width(n - i);
        cout.fill(' ');
        cout << "";

        cout << "\n";
    }

    for (i = n - 1; i >= 1; i--)
    {
      cout.width(n - i);
      cout.fill(' ');
      cout << "";

      for (j = 1; j <= i; j++)
            std::cout << "* ";

      cout.width(n - i);
      cout.fill(' ');
      cout << "";

      cout << "\n";
    }

    std::cout << "\n";

    }

    else
    {
        cout<<"Enter a lower number!";
    }

}


