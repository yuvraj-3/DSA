#include <iostream>
using namespace std;

int main(){

    int n=123;
    int count=0;
    
    while (n>0){
        n=n/10;
        count+=1;
    }
    cout<<count;
}