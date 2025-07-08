#include <iostream>
using namespace std;

int main()
{
    int n;

    cout<<"emter number";
    cin>>n;
    
    bool isprime=1;
    for (int i =2;i<n;i++)
    {
        if(n%2==0){
            isprime=0;
            break;
        }
    }

    if(isprime==1)
    {
        cout<<"prime";
    }
    else{
        cout<<"not prime";
    }

    return 0;
}