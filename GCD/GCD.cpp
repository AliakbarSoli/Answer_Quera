#include<iostream>
using namespace std;
int main()
{
    long long int x,y,z;
    cin>>x;
    cin>>y;
    if(x>y)
    {
       z=x;
    }
    else
    {
        z=y;
    }
    long long int f=1;
    for(long long int i=1;i<=z;i++)
    {
        if(x%i==0 && y%i==0)
        {
           f=i;
           //cout<<f<<"\n";
        }
    }
    cout<<f;
    return 0;
}
