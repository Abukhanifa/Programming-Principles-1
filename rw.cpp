#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int N, power=1;
    cin>>N;
    
    for (int power = 1; power < N; power = power * 2) 
    cout << power<<endl;
    
    return 0;

}