 #include<bits/stdc++.h>
 using namespace std ;
 #define nl '\n'
 
 int main(){
 	ios_base::sync_with_stdio(0);
    	cin.tie(0);
    	cout.tie(0);
 
    	int row,col;
    	cin >> row>>col;

    	int ara[row+1][col+1];

    	for(int i = 0; i< row ;i++){
    		for(int j = 0 ; j < col ; j ++){
    			cin >> ara[i][j];
    		}
    	}

	   int pre[row+1][col+1];

    	pre[0][0] = ara[0][0];
    	for(int i=1;i<col;i++){
    		pre[0][i] = pre[0][i-1]+ara[0][i];
    	}

    	for(int i = 1; i< row ;i++){
    		pre[i][0] = pre[i-1][0] + ara[i][0];
    	}


    	for(int i = 1; i< row ;i++){
    		for(int j = 1 ; j < col ; j ++){
    			pre[i][j] = pre[i][j-1]+pre[i-1][j]+ara[i][j]-pre[i-1][j-1];
    		}
    	}
 
    	for(int i = 0; i< row ;i++){
    		for(int j = 0 ; j < col ; j ++){
    			cout<<pre[i][j]<<" ";
    		}
    		cout<<nl;
    	}
    	 
    return 0 ;
 }
