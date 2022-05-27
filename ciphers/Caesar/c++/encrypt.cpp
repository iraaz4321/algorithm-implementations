#include <iostream>
#include <string>

std::string encrypt(int shift, std::string input, std::string alphabet) {
    std::string result = "";
    for (int i = 0; i < input.size(); i++)
    {
        result = result + alphabet[(alphabet.find(input[i])+shift) % alphabet.size()];
    }
    return result;
}

int main() {
    int shift = 13;
    std::string input = "hello";
    std::string alphabet = "abcdefghijklmnopqrstuvwxyz";

    std::cout << encrypt(shift, input, alphabet);
    return 0;
}
