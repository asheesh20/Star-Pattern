#include<bits/stdc++.h>
#define ll long long 
using namespace std;
void letterpattern(ll row,ll col){
	ll i,j;
	char ch;
	for(i=1;i<=row;i++){ch='A';
		for(j=1;j<=col;j++){
			if(j<=5-i||j>=3+i) {
				cout<<ch;
				if(j<=3) ch++;
				else ch--;
			}
			else {
				cout<<" ";
				if(j==4) ch--;}
		}
		cout<<endl;
	}
}
int32_t main(){
	letterpattern(4,7);
}