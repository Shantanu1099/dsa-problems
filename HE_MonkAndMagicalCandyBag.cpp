#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define lli long long int
#define vi vector<int>
#define vvi vector<vector<int>>
#define forinput for(int i =0;i<n;i++){cin>>arr[i];}
#define foroutput for(int i = 0;i<n;i++){cout<<arr[i]<<" ";}
#define pb push_back
#define pob pop_back
#define mpis map<int, string>
#define uns unordered_set
#define unm unordered_map
#define ms multiset
// Always Remember Overflow
int main(){
	
	int t; cin >> t;
	while(t--){
		int n, k; cin >> n >> k;
		multiset<long long> m;
		while(n--){
			lli candies; cin >> candies;
			m.insert(candies);
		}
		lli total_Candy = 0;
		lli half_value;
		while(k--){
			auto it = (--m.end());
			total_Candy += *(it);
			half_value = *(it) / 2;
			m.erase(it);
			m.insert(half_value);
		}
		cout << total_Candy << endl;
	}	

	return 0;
}