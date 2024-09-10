#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define lli long long int
#define vi vector<int >
#define vvi vector<vector <int >>
#define mpii map<int, int>
#define umpii unordered_map<int, int>
#define pb push_back
#define pob pop_back
#define forip for(int i = 0; i < n; ++i){cin >> arr[i]};
#define forop for(int i = 0; i < n; ++i){cout << arr[i]};
// Always remember Overflow
double eps = 1e-6;

// T.C. = p*log(N*(10*decimal))
// where p is the pth root of an 'N' element

double multiply(double mid, int root){
	double ans = 1;
	for(int i = 0; i < root; i++){
		ans *= mid;
	}
	return ans;
}
int main() {
	double num;
	int root;
	cin >> num >> root;
	double lo = 1, hi = num, mid;
	while(hi - lo > eps){
		mid = (lo + hi)/ 2;
		if(multiply(mid, root) < num){
			lo = mid;
		}
		else{
			hi = mid;
		}
	}
	cout << setprecision(10) << lo << "\n" << hi << endl; 
	cout << pow(num, 1.0/2) << endl;
}