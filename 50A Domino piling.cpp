#include<iostream>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
         freopen("input.txt", "r", stdin); 
         freopen("output.txt", "w", stdout);
     #endif

	int m,n;
	cin>>m>>n;
	cout<<m*n/2;
    return 0;
}