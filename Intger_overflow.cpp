#include<bits/stdc++.h>
using namespace std ;
#define nl '\n'

int main(){
    ios_base::sync_with_stdio(0);
       cin.tie(0);
       cout.tie(0);

       long long int a,b;
       cin >> a>>b;

       int n,m;
       n = log10(a);
       m = log10(b);

       cout<<n << " "<<m<<nl;

       if(m+n > 18) cout<<"BIG ";
       else cout<<"Small";

       return 0 ;
}
