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

int encrypt(int shift, char *input, char *alphabet, int alphabet_length) {
    char * copy;
    int size = 0;

    for (copy = input; *copy != '\0'; copy++) {
        int index = (indexFind(*copy, alphabet)+shift) % alphabet_length;
        printf("%c",alphabet[index]);
        size++;
    }
}

int main()
{
    char input[200] = "hello";
    char alphabet[40] = "abcdefghijklmnopqrstuvwxyz";
    int shift = 13;
    encrypt(shift, input, alphabet, strlen(alphabet));
    return 0;
}