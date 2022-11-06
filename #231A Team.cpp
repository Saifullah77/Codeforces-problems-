# include <iostream>
using namespace std;
int n,a,b,c,d=0;
int main(){
	#ifndef ONLINE_JUDGE
         freopen("input.txt", "r", stdin); 
         freopen("output.txt", "w", stdout);
     #endif
	cin>>n;
	while(n--){
		cin>>a>>b>>c;
		if(a+b+c>1)	d++;
	}
	cout<<d;
}

