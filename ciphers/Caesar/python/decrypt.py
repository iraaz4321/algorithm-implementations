#  MIT License
#
#  Copyright (c) 2022 iraaz4321
#
#  Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:
#
#  The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.
#
#  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
#

# Import string build in library to get alphabet
import string


def caesar_decrypt(text: str, shift: int, alphabet: str = string.ascii_lowercase) -> str:
    result: str = ""
    alphabet_length: int = len(alphabet)
    # if step is higher than the alphabet calculate the smallest possible step
    while alphabet_length < shift:
        shift -= alphabet_length
    for letter in text:
        # Check if shift would go over alphabet
        if alphabet_length + alphabet.find(letter) <= shift:
            result += alphabet[shift - 1]
        else:
            result += alphabet[alphabet.find(letter) - shift]
    return result


# Program entry point
if __name__ == '__main__':
    caesar_decrypt("Your string here!", shift=13)
