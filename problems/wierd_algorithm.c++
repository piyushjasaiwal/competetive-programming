#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n ;
    cin >> n;
    while(true)
    {
        if(n == 1){
            cout<<n;
            break;
        }else{
            if(n%2 == 1){
                cout<<n<<" ";
                n = (n*3)+1;
            }else{
                cout<<n<<" ";
                n = n/2;
            }
        }
    }
    
}