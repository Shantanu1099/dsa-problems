// Monotonic functions - Functions which maintains a given order. like increasing order or decreasing order in an array.
// We can use Binary Search on something that is monotonic -It is like searching in dictionary
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define lli long long int
#define vi vector<int>
#define forinput for(int i =0;i<n;i++){cin>>arr[i];}
#define foroutput for(int i = 0;i<n;i++){cout<<arr[i]<<" ";}
#define pb push_back
#define pob pop_back

int main() {
	int n; cin >> n;
	vector <int> v(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}
	int target; cin >> target;
	int lo = 0, hi = n - 1;
	// We are doing this condition coz if at last two elements remains, we can ourselves compare them using if-else & it would be easier to read
	// TC - O(log(N)) base 2 - As the search space is getting reduced to half every single iteration
	while(hi - lo > 1) {
		int mid = ( lo + hi ) / 2;
		if(v[mid] < target) {
			lo = mid + 1;
		} else {
			hi = mid;
		}
	}
	if( v[lo] == target ) {
		cout << lo << endl;
	} else if( v[hi] == target ) {
		cout << hi << endl;
	} else {
		cout << "NOT FOUND" << endl;
	}
}