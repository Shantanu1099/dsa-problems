#include<iostream>
using namespace std;
void printName(int i, int & n) {
	if(i >= n) return;

	cout << "Shantanu : " << i + 1 << " time" << endl;
	cout << "Printing i in asc : " << i << endl;
	printName(i+1, n); 
	cout << "Printing i in des : " << i << endl;

}
int main() {
	cout << "Start" << endl;
	int n; cin >> n;
	printName(0, n);
	cout << "End" << endl;
	return 0;
}
