#include <iostream>
#include "ttt_header.hpp"

int main(){

    char user1 = 'X';
    char user2 = 'O';
    int pos;

    std::cout << "Please select User\n" << "User1 = X\n" << "User2 = O\n";

    
    resetGrid();


    for(int i = 0; i < 4; i++) {

        std::cout << "Please select position\n";
        gridPosition();
        std::cin >> pos;
        userInput(chk(pos), user1);

        if(chkwin() == true) {
            break;
        }

        std::cout << "Please select position\n";
        gridPosition();
        std::cin >> pos;
        userInput(chk(pos), user2);

        if(chkwin() == true) {
            break;
        } 
        
        if (i == 3) {
            std::cout << "Please select position\n";
            gridPosition();
            std::cin >> pos;
            userInput(chk(pos), user1);

            if(chkwin() == true) {
                break;
            }

            else {
                std::cout << "Match tie\n";
            }
        }
}