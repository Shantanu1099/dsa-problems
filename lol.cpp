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
int n; cin >> n;
int count = 0;
while(n--){
	int x; cin >> x;
	if(x >= 45 && x % 5 == 0 && x % 9 == 0){
		count++;
	}
}
cout << count;	

	return 0;
}