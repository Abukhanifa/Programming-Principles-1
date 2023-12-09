#include <iostream>

using namespace std;

int main(){
    int n;
    cin>>n;

    int k=0;
    for (int i=0; i<n; i++ ){
    
    int p;
    cin >> p; 

    while (p>0){
    
    if(p%10==0){
        
    k++;
    }
    p=p/10;}
    }
    cout<<k<<endl;

    return 0;


}