#include<bits/stdc++.h>
using namespace std;
int x,n;
int main(){

#ifndef ONLINE_JUDGE
         freopen("input.txt", "r", stdin); 
         freopen("output.txt", "w", stdout);
     #endif
	string s;
	cin>>n;
	while(n--) 
		cin>>s,s[1]=='+'?x++:x--;
	cout<<x;

	return 0;
} 