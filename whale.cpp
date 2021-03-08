#include <iostream>
#include <vector>
#include <string>

int main() {

    // Whale, whale, whale.
    // What have we got here?
    // This program implements whale talk.
    std::string input = "turpentine and bananas";
    std::vector<char> vowels;
    vowels.push_back('a');
    vowels.push_back('e');
    vowels.push_back('i');
    vowels.push_back('o');
    vowels.push_back('u');
    vowels.push_back('A');
    vowels.push_back('E');
    vowels.push_back('I');
    vowels.push_back('O');
    vowels.push_back('U');
    std::vector<char> result;

    //std::cout << "Enter an input to be translated to whale: ";
    //std::cin  >> input;

    int vowels_size = vowels.size();
    int input_size  = input.size();

    for (int i = 0; i < input_size; i ++) {
        for (int j = 0; j < vowels_size; j ++) {
            if (input[i] == vowels[j]) {
                if (input[i] == 'e' || input[i] == 'u')
                {
                    result.push_back(input[i]);
                    result.push_back(input[i]);
                }
                else {
                    result.push_back(input[i]);
                }
            }
        }
    }

    for (int i = 0; i < result.size(); i ++) {
        std::cout << result[i];
    }
    
    std::cout << "\n";

}