#include <iostream>
#include <vector>

using namespace std;

struct knowBase{
    int position;
    int princess;
} bot;

void createboard(int size);
void run();

int main(){
    run();
}

void run(){
    int number;
    cin >> number;
    createboard(number);
}

void createboard(int size){
    vector<char> board;
    for(int i = 0; i < size*size; i++){
        char item;
        cin >> item;
        if(item == 'm'){
            bot.position = i;
        }
        if(item == 'p'){
            bot.princess = i;
        }
        board.push_back(item);
    }
	
    
    int botx, boty, princessx, princessy;
    botx = bot.position % size; boty = bot.position / size;
    princessx = bot.princess % size; princessy = bot.princess / size;
    
	
    while(boty != princessy){
        if(boty > princessy){
            cout << "UP" << endl;
            boty--;
        }
        if(boty < princessy){
            cout << "DOWN" << endl;
            boty++;
        }
    }
    while(botx != princessx){
        if(botx > princessx){
            cout << "LEFT" << endl;
            botx--;
        }
        if(botx < princessx){
            cout << "RIGHT" << endl;
            botx++;
        }
    }
}