#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define lli long long int
#define vi vector<int>
#define forinput for(int i =0;i<n;i++){cin>>arr[i];}
#define foroutput for(int i = 0;i<n;i++){cout<<arr[i]<<" ";}
#define pb push_back
#define pob pop_back
// Always keep OVERFLOW of DATATYPESin MIND
// Sets are just maps without the {values} part in it. -> Self balancing keys -> BST

void printSet(multiset<string> s){  //u cam keep any datatype insie SET -> Even Complex containers
	for(string value : s){
		cout << value << endl;
	}
}
int main(){

// set<container/primitive types> s; Every element in Set in UNique and lexiographical Sorting is done inside Set similat to Map T.C. is also same as Map... Inserting and Accessing is O(log(n));  -> Red Black Trees

// unordered_set<primitive types> us; no sorting in element similar to un..maps;  CAn be used for finding the presence of any key in SET..  ALL T>C -> O(1) HASH Tables are used..

// set<string> s;
// s.insert("LOL");	 // O(log(n)) - Red-Black Trees are used in Set as in Maps.
// s.insert("HAHAHAH");
// s.insert("DAMN BRO");
// cout << "Previous Set :" << endl;


// Multisets
multiset<string> s;
s.insert("LOL");	 // O(log(n)) - Red-Black Trees are used in Multiset as in Multimaps... duplicates  elements are allowed
s.insert("HAHAHAH");
s.insert("LOL");
s.insert("DAMN BRO");
cout << "Previous Set :" << endl;
printSet(s);

// cout << endl << endl;
// cout << "Set after modification : " << endl;
// // set<string> s:: iterator it;    OR u can also use  below 'auto' keyword to create directly
// auto it = s.find("LOL");    //O(log(n)) - Searching     -   UNordered Set-  O(1) (where order/sorting doesnot matter)
// if(it != s.end()){
// 	s.erase(it);
// }
// printSet(s);


// auto it = s.find("key" || it); //returns the first Iterator of duplicate element in multiset
// s.erase("key" || it); // Erases all the iterators of key i.e. erases all key value when passed directly with T.C. -> O(n) , but erases just an iterator if Passes an Iterator and the T.C -> O(1);
	return 0;
}