/*

*/
#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

int main(){
	int test;
	cin >> test;
	
	
	for(int i = 1; i <= test; i++){
		int size;
		cin >> size;
		vector<int> v1;
		vector<int> v2;
		int item;
		for(int j = 0; j < size; j++){
			cin >> item;
			v1.push_back(item);
		}
		sort(v1.begin(), v1.end());
		for(int j = 0; j < size; j++){
			cin >> item;
			v2.push_back(item);
		}
		sort(v2.begin(), v2.end(), std::greater<int>());
		
		
		int sum = 0;
		for(int j = 0; j < size; j++){
			sum = sum+ v1[j]*v2[j];
		}
		cout << "Case #" << i << ": " << sum << endl;
		
	}
	return 0;
}