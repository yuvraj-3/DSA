#include <iostream>
using namespace std;

int main(){

    int n= 123;
    int rev_no=0;
    int last_digit=0;

    while(n>0){

        last_digit= n%10;
        n=n/10;

        rev_no=(rev_no*10)+last_digit;

    }
    cout<<rev_no;

    return 0;
}