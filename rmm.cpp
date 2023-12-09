#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n;
    int a[n];
    int arr[10000];
    long long int sum=0;
    cin>>n;

    for(int i=0; i<n; i++){
    cin>>arr[i];
    sum+=arr[i];
    }
    cout << sum;
    return 0;
    
}