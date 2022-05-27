// MIT License
//
// Copyright (c) 2022 iraaz4321
//
// Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:
//
//  The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
//

#include <stdio.h>
#include <string.h>

int indexFind(char letter, char *alphabet){
    char * l;
    int size = 0;

    for (l = alphabet; *l != '\0'; l++) {
        if (*l == letter) {
            return size;
        }
        size++;
    }
}

int decrypt(int shift, char *input, char *alphabet, int alphabet_length) {
    char * copy;
    int size = 0;
    shift = shift*-1;
    for (copy = input; *copy != '\0'; copy++) {
        int index = (indexFind(*copy, alphabet)+shift) % alphabet_length;
        if (index < 0){
            printf("%c",alphabet[alphabet_length+index]);
        }
        else {
            printf("%c",alphabet[index]);
        }
        size++;
    }
}

int main()
{
    char input[200] = "hello";
    char alphabet[40] = "abcdefghijklmnopqrstuvwxyz";
    int shift = 13;
    decrypt(shift, input, alphabet, strlen(alphabet));
    return 0;
}
