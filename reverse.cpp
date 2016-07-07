#include <iostream>
#include <vector>
#include <sstream>
#include <string>
#include <iterator>

using namespace std;

int main(){
    int test;
    cin >> test;
    for(int k = 1; k <= test; k++){
    
        string input, output = "";
        string buff;
        
        vector<string> token;
        getline(cin, input);
        stringstream ss(input);
        
        while(ss >> buff){
            token.push_back(buff);
        }
        
        for(int i = token.size()-1; i >= 0; --i){
            output = output + token[i] + " ";
        }
        
        cout << "Case #" << k << " " << output << endl;
    }
    return 0;
}
