#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n = 0,num = 0;
    cin>>n;
    long long sum_total = (n*(n+1))/2;
    while(n>1){
        cin>>num;
        sum_total-=num;
        n-=1;
    }
    cout<<sum_total;
    return 0;
}