#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define lli long long int
#define vi vector<int >
#define vvi vector<vector <int >>
#define pb push_back
#define pob pop_back
// Always remember Overflow
// Using Backtracking

vector<string > valid;
void generatePar(string &s, int open, int close){
	// cout <<" S: " <<  s << endl;
	if(open == 0 && close == 0){
		// cout <<"E1: " <<  s << endl;
		valid.push_back(s);
		// cout <<"E2: " <<  s << endl;
		return;
	}
	if(open > 0){
		s.push_back('(');
		// cout << "A : " << s << endl;
		generatePar(s, open-1, close);
		// cout << "B : " << s << endl;
		s.pop_back();
		// cout << "C : " << s << endl;
	}
	if(close > 0){
		if( open < close ){
			s.push_back(')');
			// cout << "D : " << s << endl;
			generatePar ( s, open, close-1 );
			// cout << "E : " << s << endl;
			s.pop_back();
			// cout << "F : " << s << endl;
		}
	}
}
int main(){
	int n; cin >> n;
	string s = "";
	generatePar(s, n, n);
	for (int i = 0; i < valid.size(); ++i)
	{	
		// cout << valid.size() << endl;
		cout << valid[i] ;
	}
}