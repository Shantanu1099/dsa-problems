#include<bits/stdc++.h>
#include<typeinfo>
using namespace std;
#define ll long long
#define lli long long int
#define vi vector<int>
#define vvi vector<vector<int>>
#define forinput for(int i =0;i<n;i++){cin>>arr[i];}
#define foroutput for(int i = 0;i<n;i++){cout<<arr[i]<<" ";}
#define pb push_back
#define pob pop_back
typedef string ss;


int main(){
	// vector<vector<pair<int, int>> > v;
	// int n; cin >> n;
	// vector<pair<int, int> > temp;
	// for(int i = 0; i < n ; ++i){
	// 	int x, y; cin >> x >> y;
	// 	temp.pb(make_pair(x, y));
	// }
	// v.pb(temp);
	// cout<<v[0].size();
	// for(int i = 0 ; i < v[0].size(); ++i){
	// 	cout << v[0][i].first << " " << v[0][i].second << endl;
	// }

	// vector<vector<pair<int, int>>> v = {{{33, 44}, {443, 665}}, {{34,43}, {5343, 35}}};
	// FOr VECTOR OF VECTORS OF PAIRS
	// vector<vector<pair<int, int>>> :: iterator row;
	// vector<pair<int, int>> :: iterator col;
	// for( row = v.begin(); row != v.end(); ++row){
	// 	for(col = row->begin(); col != (*row).end(); ++col){
	// 		cout << col->first << " " << col->second << endl;
	// 	}
	// 	cout << endl;
	// }



	// For VECTOR of VECTORS...
	// vector<vector<int>> :: iterator row;
	// vector<int> :: iterator col;
	// for( row = v.begin(); row != v.end(); ++row){
	// 	for(col = (*row).begin(); col != (*row).end(); ++col){
	// 		cout << (*col) << " ";
	// 	}
	// 	cout << endl;
	// }



	// vector<pair<int, int>> v = {{33, 44}, {443, 665}};
	// vector<int> v1 = {33, 44, 443, 665};



	// vector<vector<pair<int,int>>> v = {{{43, 353}, {544, 665}}, {{65, 88}, {66, 99}}};
	// cout<<v[0][1].first << " " << v[0][1].second << endl;
	// vector<pair<int, int>> :: iterator it ;
	// for(int i = 0 ; i < v.size(); ++i){
	// 	for(it = v[i].begin(); it != v[i].end(); ++it){
	// 	cout << (it->first) << " " << (it->second) << endl;
	// 	// cout << (*it).first << " " << (*it).second << endl;
	// }	
	// }
	// for(it = v[0].begin(); it != v[0].end(); ++it){
	// 	// cout << (it->first) << " " << (it->second) << endl;
	// 	cout << (*it).first << " " << (*it).second << endl;
	// }
	// cout << endl;




	// Short - for loops - (Range Based)
	vector<int> v1 = {43, 353, 544, 665, 65};
 	for(int value: v1 ){
		cout << value << endl;
	}
	cout<<endl;


	// Example of Passig through reference and doing increment operation otherwise only the 'COPY' is Passed
	for(int &value: v1 ){
		value++;
	}

	for(int value: v1 ){
		cout << value << endl;
	}
	cout<<endl;
	// for(pair<int, int> value: v ){
	// 	cout << value.first << " " << value.second << endl;
	// }




	// Short Loops - Auto Keyword & Range Based Combined for better readability and clean code
	// Auto Keyword determines the datatype Automatically

	auto a = 11.33;
	cout << typeid(a).name() << " - " << a << endl;
	for(auto &ip : v1){
		cout << ip << " " ;
	}
	cout << endl;
	for(auto &ip : v1){
		ip++;
		cout << ip << " " ;
	}
	cout << endl;
	vector<pair<int, int>> v2 = {{43, 33}, {29, 224}};

	for(auto ele : v2){
		cout << ele.first << " " << ele.second << endl;
	}


	vector<vector<int> >  vv_arr = {{2, 3, 4, 5, 6}, {4, 3535, 33, 232}};
	for(auto & ele : vv_arr){
		for( auto & ele2 : ele){
			cout << ele2 << " ";
		}
		cout << endl;
	}
	cout << endl << endl;

	// vvi :: iterator vv_itr ;
	// vi :: iterator v_itr;   No use b'coz we are using "auto" keyword
	for(auto vv_itr = begin(vv_arr); vv_itr != end(vv_arr); ++vv_itr){
		for(auto v_itr = vv_itr->begin(); v_itr != (*vv_itr).end(); ++v_itr){
			cout << (*v_itr) << " ";
		} 
		cout << endl;
	}

	return 0;
}