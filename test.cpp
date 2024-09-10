#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define lli long long int
#define vi vector<int>
#define forinput for(int i =0;i<n;i++){cin>>arr[i];}
#define foroutput for(int i = 0;i<n;i++){cout<<arr[i]<<" ";}
#define pb push_back
#define pob pop_back
// const int N = 1e8;
// int arr[N];



// void vecOp(vector<int> v){
// 	cout << "Size of vector: "<< v.size() << endl;
	// for(int i = 0; i < v.size(); ++i){
	// 	cout<<v[i]<<" ";
// }

int main(){

vi nums = { 3, 4, 5, 6 , 5, 6, 3};
	unordered_map<int, int> mp;
	for(auto & values : nums ){
		mp[values]++;
	}
	for(auto & pr : mp ){
		if(pr.second == 1){
			cout << pr.first << endl;
		}
		// cout << pr.first << " " << pr.second << endl;
	}


// Pair
	// pair<int , string> pp;
	// pp = make_pair(4, "JBCKb");
	// cout<<pp.first<<" "<<pp.second<<endl;
	// pair<int, int> p[2];
	// p[0] = {2, 3};
	// p[1] = {5, 7};
	// for(int i = 0; i < 2; ++i){
	// 	cout<<p[i].first<<" "<<p[i].second<<endl;
	// }

// Vectors
	// vector<int> v(9, 8);
	// cout << v.size();
	// vecOp(v);



// for (int i = 0; i < N; ++i)
// {
// 	arr[i] = i;
// }
// cout<<arr[N-1];



	// arr[0] = 10;
	// cout<<arr[0]<<endl;
	// bool a = 0;
	// cout<<a<<endl;
	// // Printing ASCII value of any character
	// char c = 'a';
	// char d = 'h';
	// char f = 'j';
	// cout<<d+f<<endl;
	// cout<<(int)c<<endl;

	// Understanding & performing getline Operations
	// int t; cin>>t;
	// cin.ignore();
	// string str; getline(cin,str);
	// string str2; getline(cin,str2);
	// cout<<str<<endl<<str2;

	// Storing larger Integer Values using String
	// string l_n; cin>>l_n;
	// cout<<(int)(l_n[l_n.size()-1]-'0')<<endl;
	// cout<<(int)'0'<<endl;

// int a; cin>>a;
// int b; cin>>b;
// int smallest = (a-b)>(b-a)? b:a;
// cout<<smallest<<endl;

	return 0;
}
// LOL