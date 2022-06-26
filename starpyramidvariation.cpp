#include<bits/stdc++.h>
#define ll long long 
using namespace std;
void starpyramidvariation(ll row,ll col){
	ll i,j,k;
	for(i=1;i<=row;i++){k=1;
		for(j=1;j<=col;j++){
			if(j>=6-i&&j<=4+i&&k) {
				cout<<"*";
				k=0;
			}
			else {
			 cout<<" ";
			 k=1;
			}
		}
		cout<<endl;
	}
}
int32_t main(){
	starpyramidvariation(5,9);
}