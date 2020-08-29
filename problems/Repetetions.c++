#include<bits/stdc++.h>
using namespace std;
int main(){
    string str ;
    cin>>str;
    long max_len = 0;
    for(int i = 0;str[i] != '\0';){
        int len = 1;
        int j = i+1;
        while(str[j] != '\0' && str[j] == str[i]){
            len+=1;
            j+=1;
        }
        if(len > max_len){
            max_len = len;
        }
        i = j;
    }
    cout<<max_len;
    return 0;
}