#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define lli long long int
#define vi vector<int >
#define vvi vector<vector <int >>
#define pb push_back
#define pob pop_back
#define forip for(int i = 0; i < n; ++i){cin >> arr[i]};
// Always remember Overflow
bool conditionProvided(int a){
	// for(auto &ele : a){
			return a > 1;
		// }
}
// here the return will return either true or false because of the greater than operator

int main(){
	auto sum = [](int a , int b){return a+b;};
	cout << sum(5, 6) << endl;
	vi v = {1, 3, 4, 5};
	cout << all_of(v.begin()+1, v.end(), [](int a){return a > 1;}) << " ";
	cout << any_of(v.begin(), v.end(), [](int a){return a > 1;}) << " ";
	cout << none_of(v.begin(), v.end(), [](int a){return a > 1;}) << " ";
	cout << any_of(v.begin(), v.end(), conditionProvided) << " ";
	// Here we are using lambda function as ' [](int a){return a>1;}; '
	// all the functions as their name suggest search for the condition in the function, in place of lambda function you can use a normal function also but we are trying to make code short, crisp and east to understand

}