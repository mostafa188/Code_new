#include<bits/stdc++.h>
using namespace std ;
#define nl '\n'

int main(){
	ios_base::sync_with_stdio(0);
   	cin.tie(0);
   	cout.tie(0);

   	int n;
   	cin >> n;
   	int ara[n+1],pre[n+1];

   	for(int i = 0; i< n ;i++){
   		cin >> ara[i];
   	}
   	for(int i=0;i<n;i++) cout<<ara[i]<<" ";
   	cout<<nl;

   	pre[0] = ara[0] ;

   	for(int i=1;i<n;i++){
   		pre[i] = pre[i-1]+ara[i];
   	}

   	for(int i=0;i<n;i++) cout<<pre[i]<<" ";
   	cout<<nl;

   	int a;
   	cin >> a;

   	while(a--){
   		int l , r ;

   		cin >> l >> r;

   		if(l >=0 && r<n){
   		   	if(l == 0) 
   		   		cout<< pre[r]<<nl;
   		   	else 
   		   		cout<<pre[r]-pre[l-1]<<nl;
   		}
   		else cout<<"Enter a valid Queries ->"<<nl;
   	}
   	


   	return 0 ;
}
