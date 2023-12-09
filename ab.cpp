#include <iostream>
using namespace std;
bool check(int a[],int n, int b){
    for(int i = 0; i < n; i++ )
    {
        if(a[i] == b) 
        return true;
     }
    
    return false;
}

int main()
{
  int n;
 cin >> n;
   int a[n];
   for(int i = 0; i < n; i ++)
{
    cin >> a[i];
}
int b;
cin >> b;

if(check(a,n,b)) 
cout << "Yes";

else cout << "No";
    return 0;
}