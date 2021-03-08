#include <iostream>

int main () {
    int count = 0;

    while (count < 10) {
        std::cout << count << "  ";
        std::cout << count*count << "\n";
        count ++;
    }
}