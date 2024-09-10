#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define lli long long int
#define vi vector<int>
#define forinput for(int i =0;i<n;i++){cin>>arr[i];}
#define foroutput for(int i = 0;i<n;i++){cout<<arr[i]<<" ";}
#define pb push_back
#define pob pop_back

char upperCase(char c){
return 'A'+(c - 'a');
}

int main(){

while(true){
	string s;
	cin>>s;
	if(s.size()==0){
		break;
	}
	for(int i = 0; i < s.size(); ++i){
		s[i] = upperCase(s[i]);
	}
	cout<<s<<endl;
}
	

	return 0;
}