#include <iostream>
using namespace std;

int main(){


    int d1,d2,d3,d4,num;
    cin >> num;
    d3 = num % 2;
    num = num / 2;
    d4 = num % 2;
    num = num / 2;
    d2 = num % 2;
    num = num / 2;
    d1 = num % 2;
    cout << (d3*8+d4*4+d2*2+d1);

    return 0;


}