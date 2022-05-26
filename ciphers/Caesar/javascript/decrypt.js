/**
 *MIT License

 *Copyright (c) 2022 iraaz4321

 *Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:

 *The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.

 *THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
**/

/**
 * @param {string} input - Input string
 * @param {int} shift - Caesar shift
 * @param {string} alphabet - Alphabet of caesar
 */
function caesar_encrypt(input, shift, alphabet = "abcdefghijklmnopqrstuvwxyz") {
    //Calculate the smallest possible shift
    shift = shift - alphabet.length * Math.floor(shift / alphabet.length);
    var result = "";
    for (var i = 0; i < input.length; i++) {
        // If index would go negative start from end
        if (alphabet.indexOf(input[i]) < shift) {
            result += alphabet[(alphabet.length - alphabet.indexOf(input[i])) - shift];
        }
        else {
            result += alphabet[alphabet.indexOf(input[i]) - shift];
        }
    }
    return result;
}

console.log(caesar_encrypt("uryyb", 13));