#include<iostream>
using namespace std;
int main(){

	#ifndef ONLINE_JUDGE
         freopen("input.txt", "r", stdin); 
         freopen("output.txt", "w", stdout);
     #endif

long long a,b,c;
cin>>a>>b>>c;
cout<<((a+c-1)/c)*((b+c-1)/c);

return 0;
}