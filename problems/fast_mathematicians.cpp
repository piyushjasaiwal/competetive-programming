#include<bits/stdc++.h>
using namespace std;
int main(){
    int num ;
    cin>>num;
    while(num-- > 0){
    string s1,s2,ans = "";
    cin>>s1;
    cin>>s2;
    for(int i = 0;s1[i] != '\0';i++){
        if(s1[i] != s2[i]){
            ans = ans +"1";
        }else{
            ans = ans + "0";
        }
    }
    cout<<ans<<"\n";
    }
    return 0;
}