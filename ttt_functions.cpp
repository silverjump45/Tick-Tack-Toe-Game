#include <iostream>
#include <vector>
#include <algorithm>


std::vector<std::vector<char>> position;
std::vector<int> v;


void gridPosition() {
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            std::cout << "|" << ((i * 3) + j +1) << "|";
        };
        std::cout << "\n";
    };
}


void resetGrid() {    
    for(int i = 0; i < 3; i++) {
        std::vector<char> temp;
        for(int j = 0; j < 3; j++) {
            temp.push_back('_');
            };
            position.push_back(temp);
        };
        for(int k = 0; k < 3; k++) {
            for(int l = 0; l < 3; l++) {        
                std::cout << "|" << position[k][l] << "|"; 
            };
            std::cout << "\n";
        };
        std::cout << "\n\n\n";
}


void userInput(int pos, char u) {
    int row = (pos - 1) / 3;
    int col = (pos - 1) % 3;
    position[row][col] = u;
    for(int i = 0; i < 3; i++) {
        for( int j = 0; j < 3; j++) {
            std::cout << "|" << position[i][j] << "|";
        }
        std::cout << "\n";
    };
    std::cout << "\n\n\n";
}


int chk(int ck) {

    if(v.size() > 0) {
        for(int i = 0; i < 100; i++) {
            std::vector<int>::iterator it;
            it = std::find(v.begin(), v.end(), ck);
            if(it != v.end()) {
                std::cout << "\nPlayer already enter value at " << ck << " position please enter another value\n";
                std::cin >> ck;
            } else {
                v.push_back(ck);
                return ck;
                break;
            }
        }
    } else {
        v.push_back(ck);

        return ck;
    }

}


bool chkwin() {
    // Side to Side Check
    if(((position[0][0] == position[0][1]) && (position[0][1] == position[0][2])) && (position[0][0] != '_')) {
        if(position[0][0] == 'x') {
            std::cout << "winner is User1 = X\n";
            return true;
        } else {
            std::cout << "winner is User2 = O\n";
            return true;
        }
    } else if(((position[1][0] == position[1][1]) && (position[1][1] == position[1][2])) && (position[1][0] != '_')){
        if(position[1][0] == 'x') {
            std::cout << "winner is User1 = X\n";
            return true;
        }
    } else if(((position[2][0] == position[2][1]) && (position[2][1] == position[2][2])) && (position[2][0] != '_')) {
        if(position[2][0] == 'X') {
            std::cout << "Winner is User1 = X\n";
            return true;
        } else {
            std::cout << "Winner is User2 = O\n";
            return true;
        }
    }

    // Top - Bottom Check
    else if(((position[0][0] == position[1][0]) && (position[1][0] == position[2][0])) && (position[0][0] != '_')) {
        if(position[0][1] == 'X') {
            std::cout << "Winner is User1 = X\n";
            return true;
        } else {
            std::cout << "Winner is User2 = O\n";
            return true;

        }
    } else if(((position[0][2] == position[1][2]) && (position[1][2] == position[2][2])) && (position[0][2] != '_')) {
        if(position[0][2] == 'X') {
            std::cout << "Winner is User1 = X\n";
            return true;
        }

    // Diagonal Check
    } else if(((position[0][0] == position[1][1]) && (position[1][1] == position[2][2])) && (position[0][0 != '_'])) {
        if(position[0][0] == 'X') {
            std::cout << "Winner is User1 = X\n";
            return true;
        } else {
            std::cout << "Winner is User2 = O\n";
            return true;
        }
    } else if(((position[2][0] == position[1][1]) && (position[1][1] == position[0][2])) && (position[2][0] != '_')) {
        if(position[2][0] == 'X') {
            std::cout << "Winner is User1 = X\n";
            return true;
        } else {
            std::cout << "Winner is User2 = O\n";
            return true;
        }
    }
}