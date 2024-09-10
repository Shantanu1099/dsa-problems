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

unordered_map <char, int > um_num = {{'(' , -1}, {'[' , -2 }, {'{' , -3}, {')' , 1}, {']' , 2 }, {'}' , 3}} ;
string isBalanced(string s) {
	stack <char> st;
	for (auto value : s){
		if(um_num[value] < 0){
			st.push(value);
		}
		else{
			if(st.empty()) return "NO";
			char top = st.top();
			st.pop();
			if(um_num[value] + um_num[top] != 0) return "NO";
		}
	}
	if(!st.empty()) return "NO";
	return "YES";
}

int main(){
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		isBalanced(s);
	}

	return 0;
}