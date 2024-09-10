#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define lli long long int
#define vi vector<int>
#define forinput for(int i =0;i<n;i++){cin>>arr[i];}
#define foroutput for(int i = 0;i<n;i++){cout<<arr[i]<<" ";}
#define pb push_back
#define pob pop_back
const int N = 42;
int main(){
int a[N][N];
a[0][0] = 1;
for (int i = 1; i < N; ++i)
{
	a[i][0] = 1;
	a[i][i] = 1;
	for (int j = 1; j < i; ++j)
	{
		a[i][j] = a[i-1][j-1] + a[i-1][j];
	}
}
int t; cin>>t;
while( t-- ){
	int n; cin>>n;
	// int a[n][n];
	// a[0][0] = 1;
	// for (int i = 1; i < n; ++i)
	// {
	// 	a[i][0] = 1;
	// 	a[i][i] = 1;
	// 	for (int j = 1; j < i; ++j)
	// 	{
	// 		a[i][j] = a[i-1][j-1] + a[i-1][j];
	// 	}
	// }
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j <= i; ++j)
		{
			cout << a[i][j] << " ";
		} 
		cout << endl;
	}
}
	return 0;
}
// LOLAAA