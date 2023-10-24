#include <iostream>
using namespace std;
int main(){

    int i;
    
    cout << "N -->";
    cin >> i;

    if(( i < 2)||( i > 100000)) exit(1);
    if(( i < 0)||( i > 1000000000)) exit(1);

    int A[i];

    for ( int n = 0 ; n < i ; n++ ){
        cin >> A[n];
    }
    for ( int n = 1 ; n < i ; n++ ){
        if ( A[n] > A[n-1] ){
            cout << "up " << A[n] - A[n-1];
        }else if ( A[n] < A[n-1] ){
            cout << "down " << A[n-1] - A[n];
        }else{
            cout << "stay";
        }
        cout << endl;
    }
}