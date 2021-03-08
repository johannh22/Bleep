#include <iostream>

int main() {
    std::cout << "99 bottles of pop on the wall.\n";
    std::cout << "Take one down and pass it around.\n";
    for (int i = 98; i > 0; i --)
    {
        std::cout << i << " bottles of pop on the wall.\n";
        std::cout << "Take one down and pass it around.\n";
    }
}