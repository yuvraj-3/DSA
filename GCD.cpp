/*
Brute Force


#include <iostream>
#include <cmath>
using namespace std;

int main(){

    int n1 =22;
    int n2=44;
    int d,gcd=1;

    for (int i =1;i<=min(n1,n2);i++){

        if (n1%i==0 && n2%i==0){
            d=i;
            gcd=max(gcd,d);
        }
    }
    cout<<gcd<<" ";

    return 0;
}*/


//Euclidean Algorithm
#include <iostream>
using namespace std;

int main() {
    int a = 18, b = 48;

    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }

    cout << "GCD is: " << a << endl;
    return 0;
}



/* For LCM  
lcm= a*b/gcd
*/