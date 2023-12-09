#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n, sum = 0;

    cin>>n;

    for(int a=1; a<=n; ++a)
    sum += a;

    cout<<sum;
    
    return 0;
}