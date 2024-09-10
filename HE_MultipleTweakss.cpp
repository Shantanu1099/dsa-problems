#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define lli long long int
#define vi vector<int>
#define forinput for(int i =0;i<n;i++){cin>>arr[i];}
#define foroutput for(int i = 0;i<n;i++){cout<<arr[i]<<" ";}
#define pb push_back
#define pob pop_back
int main(){

int a, b, c; cin >> a >> b >> c;
int cth_num;
for (int i = 1; c > 0; ++i)
{
	if(i % a == 0 || i % b == 0){
		--c;
		cth_num = i;
	}
}
int lcm;

for(int i = 2; i <= a*b ; ++i){
	if( i % a == 0 && i % b == 0){
		lcm = i;
		break;
	}
}
int step;

if(cth_num % lcm == 0){
	step = lcm;
}
else if(cth_num % a == 0){
	step =  a;
}
else{
	step = b;
}
int step_num;

for (int i = cth_num; i >= 0 ; i -= step)
{
	cout<<i<<" ";
}


	return 0;
}