#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define lli long long int
#define vi vector<int>
#define forinput for(int i =0;i<n;i++){cin>>arr[i];}
#define foroutput for(int i = 0;i<n;i++){cout<<arr[i]<<" ";}
#define pb push_back
#define pob pop_back


void vecVecOp(vector< vector< int> > & v){
	cout << "Size:" << v.size() << endl;
	for (int i = 0; i < v.size(); ++i)
	{
		cout << "Size: " << v[i].size() << endl;
		for(int j = 0 ; j < v[i].size(); ++j){
			cout << v[i][j] << " ";
		}
		cout << endl;
	}
}

void vecPairOP(vector<pair<int, int>>& a){
	cout << "Size: " << a.size() << endl;
	for(int i = 0; i < a.size(); ++i){
	cout << a[i].first << " " << a[i].second << endl;
}
	a.pb(make_pair(22, 11));
// 	for(int i = 0; i < a.size(); ++i){
// 	cout << a[i].first << " " << a[i].second << endl;
// }
}

void vecOp(vector<int> & v){
cout << "Size of vector: "<< v.size() << endl;
	for(int i = 0; i < v.size(); ++i){
		cout<<v[i]<<" ";
}	cout << endl;
	cout<<"First " << endl;
	v.pb(23);
	cout << "Size of vector: "<< v.size() << endl;
	for(int i = 0; i < v.size(); ++i){
		cout<<v[i]<<" ";
		}	cout << endl;
	cout << "Second " << endl << endl;
}

int main(){

	// Nested vectors
	// VECTOR of Pairs
	// vector<pair< int , int > > v = {{2, 3}, {5, 6}, {88, 44}}; Assigning values
	// vector<pair< int, int >> v;
	// int n; cin>> n;
	// for(int i = 0; i < n ; ++i ){ 
	// 	int x, y; cin >> x >> y;
	// 	v.pb({x, y});
	// }
	// vecPairOP(v);


	// 1 - Array of vectors
	// int n; cin>>n;
	// vector<pair<int, int>> v2[n];
	// for(int i = 0; i < n; ++i ){
	// 	int s; cin >> s;
	// 	for(int j = 0; j < s; ++j){
	// 		int ip, ip2 ; cin >> ip >> ip2 ;
	// 		v2[i].pb({ip, ip2});
	// 	}
	// vecPairOP(v2[i]);
	// }


	// Vector of vectors
	int N; cin >> N;
	vector< vector<int> >  v;
	for(int i = 0; i < N; ++i){
		int n; cin >> n;
		vector<int> temp; 
		// Either use this or push an empty vector inside the main vector
		// then push values inside this empty vector using element indexing of main vector
		// v.pb(vector<int> ());
		for(int j = 0; j < n; ++j){
			int x; cin >> x;
			temp.pb(x);
			// v[i].pb(x);
		}
		v.pb(temp);
	}
	vecVecOp(v);
	v.pb(vector<int> ());
	vecVecOp(v);
	cout << v[0][2];




	// vector<int> v;
	// v.pb(88);
	// vecOp(v);
	// v.pb(99);
	// vecOp(v);
	// v.pob();
	// vecOp(v);
	// vector<pair<int, string>> v2;
	// v2.pb({78, "LALA"});
	// vecPairOP(v2);
	// v2.pb(make_pair(88, "oohhh yeah"));
	// vecPairOP(v2);
	// v2.pob();
	// vecPairOP(v2);
	// vector<int> & v3 = v ;
	// v3 = v;
	// vecOp(v3);
	// v3.pb(101);
	// vecOp(v3);
	// vecOp(v);
	return 0;
}