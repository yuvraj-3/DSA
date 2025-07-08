#include <iostream>
using namespace std;

 int main (){

    int n=12321;
    int rev_no=0;
    int x=n;

    while(x>0)
    {
        rev_no=(rev_no*10)+x%10;
        x=x/10;

    }
     if (n==rev_no){
        cout<<"Is palindrome";
    }
    else{
        cout<<"Is not palindrome";
    }

 }