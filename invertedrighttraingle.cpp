#include<bits/stdc++.h>
#define ll long long 
using namespace std;
void invertedrighttraingle(ll col){
	ll i,j;
	for(i=1;i<=col;i++){
		for(j=1;j<=col;j++){
			if(j<=col+1-i) cout<<"*";
			else cout<<" ";
		}
		cout<<endl;
	}
}
