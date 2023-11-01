
#include<bits/stdc++.h>
using namespace std;

void insert(vector<int>& v, int x){
    v.push_back(x);
    int i=v.size()-1;
    
    while(i>0 && (v[i]>v[(i-1)/2])){
        swap(v[i],v[(i-1)/2]);
        i=(i-1)/2;
    }
}

int main(){
    int n;
    vector<int> v;
    
    while(cin >> n){
        insert(v,n);
    }
    
    for(auto i : v){
        cout << i << " ";
    }cout << endl;
}
