#include <iostream>
#include <string>

std::string decrypt(int shift, std::string input, std::string alphabet) {
    std::string result = "";
    shift *= -1;
    for (int i = 0; i < input.size(); i++)
    {
        int cal = shift+alphabet.find(input[i]); // otherwise had some overflow issue
        int index = cal % alphabet.size();
        if (cal < 0){
            result = result + alphabet[alphabet.size()+cal];
        }
        else {
            result = result + alphabet[index];
        }
    }
    return result;
}

int main() {
    int shift = 13;
    std::string input = "hello";
    std::string alphabet = "abcdefghijklmnopqrstuvwxyz";

    std::cout << decrypt(shift, input, alphabet);
    return 0;
}

