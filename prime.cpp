#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;

    cout<<"emter number ";
    cin>>n;
    
    
    if (n <= 1) {
        cout << "Not prime";

        return 0; //return 0 will edn the program here
    }
    
    bool isprime=true;

    for (int i =2;i<sqrt(n);i++)
    {
        if(n%i==0){
            isprime=false;
            break;
        }
    }

    if(isprime)
    {
        cout<<"prime";
    }
    else{
        cout<<"not prime";
    }

    return 0;
}