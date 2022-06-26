#include<bits/stdc++.h>
#define ll long long 
using namespace std;
void triangle(ll col){
	ll i,j;
	for(i=1;i<=col;i++){
		for(j=1;j<=col;j++){
			if(j<=i) cout<<"*";
			else cout<<" ";
		}
		cout<<endl;
	}
}