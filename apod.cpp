#include <iostream>
#include <cmath>
using namespace std;

int main(){


    int r1,r2,r3,r4,num;
    cin >> num;
    
    r3 = num % 2;
    num = num / 2;
    r4 = num % 2;
    num = num / 2;
    r2 = num % 2;
    num = num / 2;
    r1 = num % 2;
    cout << (r3*8+r4*4+r2*2+r1);

    return 0;


}