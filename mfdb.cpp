#include <iostream>

using namespace std;

int main(){

    int n; cin >> n;
    int a = -1;
    while(n--){
        int x;
        cin >> x;

        if(a < x){
            a = x;
        }

    
    }
    cout << a;
    return 0;
}