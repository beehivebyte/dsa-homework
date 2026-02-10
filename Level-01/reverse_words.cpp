// problem link:https://www.codechef.com/practice/course/strings/STRINGS/problems/PALINDRCHECK

#include <string>
#include <vector>
using namespace std;
string reverseWords(string s) {

    // Approach:
    // Extract words from the string while skipping extra spaces.
    // Store each word in a vector.
    // Append words in reverse order with a single space between them.

    vector<string> words;
    int n = s.length();
    int i = 0;

    while (i < n) {
        // Skip spaces
        while (i < n && s[i] == ' ') {
            i++;
        }

        if (i >= n) break;

        // Read a word
        string word = "";
        while (i < n && s[i] != ' ') {
            word += s[i];
            i++;
        }

        words.push_back(word);
    }

    // Build result in reverse order
    string result = "";
    for (int j = words.size() - 1; j >= 0; j--) {
        result += words[j];
        if (j != 0) {
            result += " ";
        }
    }

    return result;
}
