#include <iostream>
using namespace std;

int main()
{

    int n;                     
    cin>>n;
    int i =1;

    while(i<=n)
    // makes pattern like
    // 1111
    // 2222
    // 3333
    {
        int j=1;
        while(j<=n)
        {
            cout<<i;
            j++;
        }
        cout<<endl;
        
        i++;
    }
}