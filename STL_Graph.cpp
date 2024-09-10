#include<bits/stdc++.h>
using namespace std;

// ADJACENCY MATRIX & ADJACENCY LIST
// Generally Adjacency List is preferred as it can store more number of vertexes so space complexity comes down to O(vertex+edges) || O(N+M) 


const int N = 1e3+10;
int graph[N][N];
// Global variable have values 0




int main() {
 	int vertex, edges;
	cin >> vertex >> edges;

	// Adjacency matrix
	// O(vertex^2) || O(N^2) - Space complexity
	// vertex != 10^5 | vertex <= 10^3 As vectors or arrays | contiguous memory allocation cannot be more than 10^7 OR 10^8
	// Finding whether two vertex are connected - T.C. - O(1)
	int graph1[vertex+1][vertex+1] = {0};
	for (int i = 0; i < edges; ++i) {
		int vertex1, vertex2;
		cin >> vertex1 >> vertex2;
		graph1[vertex1][vertex2] = 1;
		graph1[vertex2][vertex1] = 1;
	}
	for(int i = 0; i < vertex; ++i) {
		for (int j = 0; j < vertex; ++j) {
			cout << graph1[i][j] << " ";
		}
		cout << endl;
	}


	// Adjacency List of N lists where N is num of vertex
	vector<int> graph2[vertex+1];
	for (int i = 0; i < edges; ++i) {
		int vertex1, vertex2;
		cin >> vertex1 >> vertex2;
		graph2[vertex1].push_back(vertex2);
		graph2[vertex2].push_back(vertex1);
		// In case some weight is involved make a vector<pair<int, int>>v & insert weight in pair
		// graph2[vertex1].push_back({vertex2, wt});
	}
	// for(auto & vector: graph2) {
	// 	for ( auto & ele : vector) {
	// 		cout << ele << " ";
	// 	}
	// }
	// for(int i = 0; i < vertex; ++i) {
	// 	for (int j = 0; j < vertex; ++j) {
	// 		cout << graph2[i][j] << " ";
	// 	}
	// 	cout << endl;
	// }


	return 0;
}