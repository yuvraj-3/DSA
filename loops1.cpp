#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int i =1;
    int sum= 0;

    if(n>0)
    {
        cout<<"a is positive"<<endl;
    }
    else
    {
        cout<<"number is -ve"<<endl;
    }


    while(i<=n)
    {
        sum = sum + i;
        i++;
    }
    cout<<sum;
}