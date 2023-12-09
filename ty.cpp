#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int N, power=1;
    cin>>N;

    for (power < N; power *=2;) 
    cout << power;
    cout<<" ";
    
    return 0;

}