#include <iostream>
#include <cmath>

using namespace std;
int main() {
    int n,k;
    std::cin>>n>>k;

    if(n<=k) 
    std::cout<<2;

    else if(n*2%k==0) 
    std::cout<<n*2/k;

    else 
    std::cout<<n*2/k+1;
    
    return 0;
}