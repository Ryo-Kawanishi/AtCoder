#include <bits/stdc++.h>
using namespace std;

int main(){

    string a[3], number;
    int num[3], size;

    cin >> number;
    size = number.size();

    if ( size != 3){
        cout << "error";
        exit(1);
    }

    for ( int b = 0 ; b < 3 ; b++){
        a[b] = number.at(b);
    }

    for ( int b = 0 ; b < 3 ; b++){

        if ( a[b] == "0") num[b] = 0;
        else if ( a[b] == "1") num[b] = 1;
        else if ( a[b] == "2") num[b] = 2;
        else if ( a[b] == "3") num[b] = 3;
        else if ( a[b] == "4") num[b] = 4;
        else if ( a[b] == "5") num[b] = 5;
        else if ( a[b] == "6") num[b] = 6;
        else if ( a[b] == "7") num[b] = 7;
        else if ( a[b] == "8") num[b] = 8;
        else if ( a[b] == "9") num[b] = 9;

        else{
            cout << "error"<< endl;
            exit(1);
        }

    }

    int sum = num[0] * 100 + num[1] * 10 + num[2];

    cout << sum * 2;
    
    return 0;

}