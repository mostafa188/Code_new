#include<bits/stdc++.h>
using namespace std ;
#define nl '\n'

void pirnt(vector<int>&v,int n){
    for(int i = 0; i< n ;i++){
        cout<<v.at(i)<<" ";
    }
    cout<<nl;
}
int main(){
    ios_base::sync_with_stdio(0);
       cin.tie(0);
       cout.tie(0);

       int n;
       cin >> n;
       
       vector<int>v(n);
       for(auto &it : v){
           cin >> it ;
       }

       while(next_permutation(v.begin(), v.end())){
            pirnt(v,n);
       }

       return 0 ;
}
