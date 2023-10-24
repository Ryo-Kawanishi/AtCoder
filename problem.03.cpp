#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    int num[6];

    for ( int i = 0 ; i < 6 ; i++ ){
        cin >> num[i];
    }

    sort(num, num+6);

    cout << "[" << num[3] << "]";

    return 0;

}