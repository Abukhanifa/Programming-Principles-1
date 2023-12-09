#include <iostream>

using namespace std;

int main(){
    int n, sum=0;
    int a[n];
    int arr[100000];
    cin>>n;

    for(int i=0; i<n; i++){
    cin>>arr[i];
    sum+=arr[i];
    }
    cout << sum;
    return 0;
    
}