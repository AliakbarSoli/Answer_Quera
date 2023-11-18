#include<iostream>

using namespace std;

int main()
{
    int n,m;
    cin>>n;
    cin>>m;
    if(4>=n>=1 && 4>=m>=1)
    {

        if((n==1&& m==4)||(n==4&&m==1))
        {
            cout<<"2";
        }
        else if(n==2&&m==3||n==3&&m==2)
        {
            cout<<"2";
        }
        else if(n==m)
        {
            cout<<"0";
        }
        else
        {
            cout<<"1";
        }
    }
    else
    {
        cout<<"InCorrect";
    }
    return 0;
}
