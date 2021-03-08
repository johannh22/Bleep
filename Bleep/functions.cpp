#include <string>

//This function replaces a word in a text by a sequence of '*'
void repast(std::string word, std::string &text, int i) {

    int n = word.size();
    for (int j = 0; j < n; j++) {

        text[i + j] = '*'; //Replaces letter for "*". Notice 'i+j' because you consider 'i' the reference

    }

}

void bleep(std::string word, std::string &text) {

    int n = text.size();
    for (int i = 0; i < n; i++) {

        int iseq = 0;
        for (int j = 0; j < word.size(); j++) {

            if (text[i+j] == word[j]) {
                iseq ++;
            }

        }

        if (iseq == word.size()) {
            repast(word, text, i);
        }

    }

}