#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <stack>
#include <queue>
#include <deque>
#include <set>
#include <map>
#include <cmath>
#include <iterator>
using namespace std;

vector<int> frequencyOfChar(string word)
{
    vector<int> freq_char(256, 0);
    for (auto i : word)
        freq_char[i]++;

    return freq_char;
}

bool isWordPossible(vector<int> &freq_word, vector<int> &freq_chars)
{
    for (int i = 0; i < 256; i++)
    {
        if (freq_word[i] > freq_chars[i])
            return false;
    }

    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<string> words;
    string chars;

    vector<int> freq_chars = frequencyOfChar(chars);
    int total_words_length = 0;
    for (auto str : words)
    {
        vector<int> freq_word = frequencyOfChar(str);
        if (isWordPossible(freq_word, freq_chars))
            total_words_length += str.length();
    }

    cout << total_words_length;

    return 0;
}