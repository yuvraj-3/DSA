#include <iostream>
using namespace std;

int main (){

    int n=4;

/*for
    *
    **
    ***
    ****
pattern 
    
    for (int i =0;i<n;i++){
        for(int j =0 ; j<=i;j++){
            cout<<"*";

        }
        cout<<endl;
    }
*/
    /*For
    ****
    ***
    **
    *
pattern
    for (int i =0;i<n;i++){
        for(int j =i ; j<n;j++){
            cout<<"*";

        }
        cout<<endl;
    }*/
    for (int i = 5; i >= 1; i--) {
        for (int j = 0; j < i; j++) {
            cout << j;
        }
        cout << endl;
    }
    return 0;
}