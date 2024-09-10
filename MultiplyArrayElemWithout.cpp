#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define lli long long int
#define vi vector<int >
#define vvi vector<vector <int >>
#define pb push_back
#define pob pop_back
#define forip for(int i = 0; i < n; ++i){cin >> arr[i];}
// Always remember Overflow

int main(){
	int n; cin >> n;
	int arr[n];
	forip
	int count = 0;
	for(int i = 0; i < n; ++i){
		for(int j = 0; j < arr[i+1]; ++j){
			count += arr[i];
		}
	}
	cout << count << endl;
}