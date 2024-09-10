#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define lli long long int
#define vi vector<int>
#define forinput for(int i =0;i<n;i++){cin>>arr[i];}
#define foroutput for(int i = 0;i<n;i++){cout<<arr[i]<<" ";}
#define pb push_back
#define pob pop_back

char upper(char c){
	return 'A' + (c - 'a');
}

char lower(char c){
	return 'a' + (c - 'A');
}

int main(){

string s; cin>>s;
lli isPrime = 0;
for(lli i = 0; i < s.size(); ++i){
	if( s[i] >= 97 ){
		s[i] = upper(s[i]);
		isPrime += s[i];
	}
	else{
		s[i] = lower(s[i]);
		isPrime -= s[i];
	}
}
if(isPrime < 0){
	isPrime = isPrime * -1;
}	
bool answer = true ;
for(lli i = 2; i < (isPrime/2)+1; ++i){
	if( isPrime % i == 0 ){
		answer = false;
		break;
	}
}
cout<<answer<<endl;
// cout<<s;


	return 0;
}