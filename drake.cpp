#include <iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[10000];
    int odd=0;
    int a;
    
    for(int i=0; i<n; i++){
    cin>>a;
    if(a%2!=0)
    odd++;
    }
    cout<< odd << " " <<endl;

    

}
