#include <iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    int arr[100000];

    for(int i=0; i<n; i++){
    cin>>a[i];
    }
    long long sum=0;
    for(int i=0; i<n; i++){;
    sum+=a[i];
    }
    cout << sum;
    return 0;
    
}