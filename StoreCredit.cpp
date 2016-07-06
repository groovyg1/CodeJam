#include <iostream>
#include <vector>

using namespace std;

int main(){
	int test;
	cin >> test;
	int credit, items;
	for(int k = 1; k <= test; k++){
		vector<int> price;
		cin >> credit >> items;
		for(int i = 0; i < items; i++){
			int x;
			cin >> x;
			price.push_back(x);
		}
		
		//cout << "Finding items" << endl;
		for(int i = 0; i < items-1; i++){
			for(int j = i+1; j < items; j++){
				if(price[i] + price[j] == credit){
					cout << "Case #" << k << ": " << i+1 << " " << j+1 << endl;
				}
			}
		}
	}
	
	return 0;
}