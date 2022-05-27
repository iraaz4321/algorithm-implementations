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
