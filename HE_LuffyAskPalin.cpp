#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define lli long long int
#define vi vector<int>
#define forinput for(int i =0;i<n;i++){cin>>arr[i];}
#define foroutput for(int i = 0;i<n;i++){cout<<arr[i]<<" ";}
#define pb push_back
#define pob pop_back
const int N = 1e5+10;
int hsh[N][26];
int main(){
int t; cin>>t;
while( t-- ){
	int n, q;
	cin >> n >> q;
	string s;
	cin >> s;
	while( q-- ){
		for(int i = 0; i < N; ++i){
			for(int j = 0 ; j < 26 ; ++j){
				hsh[i][j] = 0;
			}
		}
		int l, r;
		cin >> l >> r;
		for(int i = l-1; i < r; ++i){
			hsh[q][s[i] - 'a']++;
		}

		// Time Limit exceeded  -> Partially Accepted
		// int hsh[26];
		// for(int i = 0 ; i < 26; ++i){
		// hsh[i] = 0;
		// }
		// int l, r;
		// cin >> l >> r;
		// for(int i = l-1; i < r; ++i){
		// 	hsh[s[i] - 'a']++;
		// }
		// int ct = 0;
		// for(int i = 0; i < 26 ; i++){
		// if(hsh[i] % 2 != 0) ct++;
		// }
		// if(ct > 1) cout << "NO" << endl;
 
		// else cout << "YES" << endl; 

		int ct = 0;
		for(int i = 0; i < N; ++i){
			for(int j = 0 ; j < 26 ; ++j){
				if(hsh[i][j] % 2 != 0) ct++;
			}
		}
		if( ct > 1 ) cout<< "NO"<< endl;

		else cout<< "YES" <<endl;
	}
}
	
	return 0;
}