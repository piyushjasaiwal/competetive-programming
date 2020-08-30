#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> subset(vector<int> list,int vidx){
    if(vidx > list.size()){
        vector<vector<int>> **base;

    }

    vector<int> ans = subset(list,vidx+1);
    for(auto i)
}

int main(){
    vector<int> list ;
    list.push_back(1);
    list.push_back(2);
    list.push_back(3);

    vector<int> ans = subset(list,0);
}