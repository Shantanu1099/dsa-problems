#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define lli long long int
#define vi vector<int>
#define forinput for(int i =0;i<n;i++){cin>>arr[i];}
#define foroutput for(int i = 0;i<n;i++){cout<<arr[i]<<" ";}
#define pb push_back
#define pob pop_back
const int N = 1e7+10;
long long int arr[N];
int main(){


int n, m; 
cin>>n>>m;

while(m--){
	int a, b, k;
	cin>>a>>b>>k;
	arr[a] += k;
	arr[b+1] += -k;
}

long long res = -1;

for( int i = 1; i <= n; ++i ){
	arr[i] += arr[i-1];
	if( arr[i] > res ){
		res = arr[i];
	}
}

cout<<res<<endl;

// for( int i = 1 ; i <= n ; ++i ){

// }


// Time Limit Exceeded
// while(m--){
// 	int a, b, k;
// 	cin>>a>>b>>k;
// 	for(int i = a ; i <= b ; ++i ){
// 		arr[i] += k ;
// 	}
// }

// long res = -1;
// for( int i = 1 ; i <= n ; ++i ){
// 	if( arr[i] > res ){
// 		res = arr[i];
// 	}
// }
// cout<<res<<endl;

	return 0;
}