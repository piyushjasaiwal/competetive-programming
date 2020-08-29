#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    long long ar[n];
    for(int i = 0;i<n;i++){
        cin>>ar[i];
    }
    long long ans = 0;
    for(int i = 1;i<n;i++){
        if(ar[i] < ar[i-1]){
            ans += (ar[i-1] - ar[i]);
            ar[i] = ar[i-1];
        }
    }
    cout<<ans;
    return 0;
}