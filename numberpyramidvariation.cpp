#include<bits/stdc++.h>
#define ll long long 
using namespace std;
void numberpyramidvariation(ll row,ll col){
	ll i,j,k;
	for(i=1;i<=row;i++){k=1;
		for(j=1;j<=col;j++){//k=1;
			if(j<=4+i&&j>=6-i) {
				cout<<k;
				if(j<=4) k++;
				else k--;
				}
			else cout<<" ";
		}
		cout<<endl;
	}
}
int32_t main(){
	numberpyramidvariation(5,9);
}