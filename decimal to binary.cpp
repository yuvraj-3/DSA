#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n =10;
    int binary[32];
    int i =0;

    if (n==0)
    {
        cout<<"binary: 0";
    }
    else
    {
        while(n>0)
        {
            binary[i]= n%2;
            n=n/2;
            i++;
        }
        cout<<"binary : ";
        for (int j=i-1;j>=0;j--)
        {
            cout<<binary[j];
        }
    }
    return 0;
}