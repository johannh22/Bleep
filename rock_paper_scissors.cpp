// This program plays rock paper scissors.
#include <iostream>
#include <stdlib.h>

int main() {

    srand (time(NULL));
    std::string cwin, uwin, draw;
    cwin = "Computer wins!\n";
    uwin = "You win!\n";
    draw = "It's a draw!\n";
  
    int computer = rand() % 3 + 1;

    int user = 0;

    std::cout << "====================\n";
    std::cout << "rock paper scissors!\n";
    std::cout << "====================\n";

    std::cout << "1) ✊\n";
    std::cout << "2) ✋\n";
    std::cout << "3) ✌️\n";

    std::cout << "shoot! ";
    std::cin >> user;

    if (user == 1) {
        if (computer == 1) {
            std::cout << draw;
        }
        else if (computer == 2) {
            std::cout << cwin;
        }
        else if (computer == 3) {
            std::cout << uwin;
        }
    }

    else if (user == 2) {
        if (computer == 1) {
            std::cout << uwin;
        }
        else if (computer == 2) {
            std::cout << draw;
        }
        else if (computer == 3) {
            std::cout << cwin;
        }
    }
    
    else if (user == 3) {
        if (computer == 1) {
            std::cout << cwin;
        }
        else if (computer == 2) {
            std::cout << uwin;
        }
        else if (computer == 3) {
            std::cout << draw;
        }
    }
}
