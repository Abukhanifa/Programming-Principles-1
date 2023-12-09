#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int N, power=2;
    cin>>N;
    cout<<power<<endl;
    while (power<N)
    power=power*2;
    cout<<power<<endl;

    return 0;

}