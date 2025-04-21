#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int i;
    bool prime=true;
    for(i=2;i<n;i++)
    {
        if (n%i==0)
        {
            prime=false;
            //cout<<"prime"<<i<<endl;
            
        }
       

        
    }
    cout<<prime;
}