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
