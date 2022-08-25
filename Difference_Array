#include<bits/stdc++.h>
using namespace std ;
#define nl '\n'

int main(){
	ios_base::sync_with_stdio(0);
   	cin.tie(0);
   	cout.tie(0);

   	int n ;
   	cin >> n;
   	int ara[n+1],dif[n+1] ={0};

   	for(int _ =0;_<n;_++) cin >> ara[_];
   	
   	int t;
   	cin >> t;
   	while(t--){
   		int l,r,v;
   		cin >> l>>r>>v;
   		dif[l] += v ;
   		dif[r+1] -= v;
   }
   
   for(int i = 1; i<= n ;i++){
   		dif[i] += dif[i-1];
   }

   for(int i = 0; i< n ;i++){
   		cout<<ara[i]+dif[i]<<" ";
   }
   	 
   	return 0 ;
}
