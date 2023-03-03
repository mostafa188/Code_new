#include<bits/stdc++.h>
#define nl endl
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);char buffer[256];
    cout<<"A / B expression -><- "<<nl;
    int a,b,n;cin>>a>>b>>n;
    
    string str=to_string(a/b);
    str+='.';
    a = a%b;
    for(int i=0;i<n;i++){
        a*=10;
        if(a >=b){
            str+=to_string(a/b);
            a%=b;
        }else{
            str+='0';
        }
    }

    cout<<str<<nl;
    return 0;
}
