#include <iostream>
#include <string>
#include <vector>

int main() {
    // Define a list of abusive words
    std::vector<std::string> abusiveWords = {"abuse1", "abuse2", "abuse3"};

    // Input string
    std::string inputString = "This is an abusive1 message with abuse2 and abuse3 words.";

    // Replace abusive words with asterisks
    for (const std::string& abusiveWord : abusiveWords) {
        size_t found = inputString.find(abusiveWord);
        while (found != std::string::npos) {
            inputString.replace(found, abusiveWord.length(), std::string(abusiveWord.length(), '*'));
            found = inputString.find(abusiveWord, found + abusiveWord.length());
        }
    }

    // Print the modified string
    std::cout << inputString << std::endl;

    return 0;
}
