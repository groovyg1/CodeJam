#include <iostream>
#include <set>
#include <cctype>
#include <vector>
#include <algorithm>

using namespace std;

//void sort(vector<string>& retstr);

int main(){
	int t, n;
	cin >> t;
	int tc = 1;
	while(tc <= t){
		cin >> n;
		set<char> buff;
		vector<string> retstr;
		int max = 0;
		char c = getchar();
		while(n--){
			string str;
			getline(cin, str);
			for(int i = 0; i < str.size(); i++){
				if('A'<=str.at(i) && str.at(i) <= 'Z')
					buff.insert(str[i]);
			}
			if(max < buff.size()){
				max = buff.size();
				retstr.clear();
				retstr.push_back(str);
			}
			else{
				if(max == buff.size()){
					retstr.push_back(str);
				}
			}
			buff.clear();
		}
		sort(retstr.begin(), retstr.end());
		cout << "Case #" << tc << ": " << retstr[0] << endl;
		retstr.clear();
		tc++;
	}
	return 0;
}

//void sort(vector<string>& retstr){

//}