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
long long solve(int n, vector<int> A){
	int count = 0;
	for(int i = 0; i < A.size(); ++i){
		// cout << count << " ";
		// cout << "Before" <<endl;
		count += (A[i] * pow(-1, i));
		// cout << count << " ";
		// cout << "After" <<endl;
	}
	return count;
}
int main(){
	int n; cin >> n;
	vector<int > A = {1, -2, -3, 2, 1};
	// int arr[n];
	// forip
	// int count = 0;
	// for(int i = 0; i < n; ++i){
	// 	count += (arr[i] * pow( -1, i ));
	// }
	int a = solve(n, A);
	cout << a << endl;

}