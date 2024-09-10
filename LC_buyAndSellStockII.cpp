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
void printMap(map<int, set<int>> m){
	for(auto & pr: m){
		cout << pr.first << " " << pr.second.first << endl;
	}
}
int main(){
	vi v = {7,1,5,3,6,4};
	map<int, set<int>> mp;

for(auto i = 1; i <= v.size(); ++i){
	mp[i] = v[i];
}

printMap(mp);

	return 0;
}