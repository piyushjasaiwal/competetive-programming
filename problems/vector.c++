#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v ;
    for(auto i = 0;i<1000;i++){
        v.push_back(i);
    }
    
    for(auto i = v.begin() ; i != v.end();i++){
        cout<<*i<<"\n";
    }
}