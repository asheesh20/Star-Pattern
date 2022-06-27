#include<bits/stdc++.h>
#define ll long long 
using namespace std;
void hollowfullpyramidstar(ll row,ll col){
	ll i,j;
	for(i=1;i<=row;i++){
		for(j=1;j<=col;j++){
			if(i<=4){
				if(j==6-i||j==4+i) cout<<"*";
				else cout<<" ";
			}
			else cout<<"*";
		}
		cout<<endl;
	}
}
int32_t main(){
	hollowfullpyramidstar(5,9);
}