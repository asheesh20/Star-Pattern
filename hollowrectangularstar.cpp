#include<bits/stdc++.h>
#define ll long long 
using namespace std;
void hollowrectangularstar(ll row,ll col){
	ll i,j;
	for(i=1;i<=row;i++){
		for(j=1;j<=col;j++){
			if(i==2){
				if(j==1||j==5) cout<<"*";
				else cout<<" ";
			}
			else cout<<"*";
		}
		cout<<endl;
	}
}
int32_t main(){
	hollowrectangularstar(3,5);
}