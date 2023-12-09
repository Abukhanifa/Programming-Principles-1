#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n; 
    cin>>n;

    int even=0;
    int odd=0;

    int b;
    

    for(int i=0; i<n; i++){
    cin>>b;

    if(b%2==0)
    even++; 
    
    else odd++;}
    cout<< even <<" "<< odd <<endl;

    return 0;
    

}