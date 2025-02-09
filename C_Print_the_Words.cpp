#include <iostream>
#include <sstream>
#include <string>
#include <unordered_map>
#include <cctype>

using namespace std;

// Function to clean and normalize the word by removing punctuation and converting to lowercase
string cleanWord(const string &word)
{
    string cleaned;
    for (char ch : word)
    {
        if (isalpha(ch) || isdigit(ch))
        {
            cleaned += tolower(ch);
        }
    }
    return cleaned;
}

int main()
{
    string input;
    getline(cin, input); // Read the entire line of input

    unordered_map<string, pair<int, string>> word_map; // Stores cleaned word -> (count, original word)
    stringstream ss(input);
    string word;
    string longest_word, shortest_word, most_repeated_word;
    int max_len = 0, min_len = INT_MAX, max_count = 0;

    while (ss >> word)
    {
        string cleaned_word = cleanWord(word);

        // If it's a new word
        if (word_map.find(cleaned_word) == word_map.end())
        {
            word_map[cleaned_word] = {1, word};
        }
        else
        {
            word_map[cleaned_word].first++;
        }

        // Check for longest word
        if (cleaned_word.length() > max_len)
        {
            max_len = cleaned_word.length();
            longest_word = word;
        }

        // Check for shortest word
        if (cleaned_word.length() < min_len)
        {
            min_len = cleaned_word.length();
            shortest_word = word;
        }

        // Check for most repeated word
        if (word_map[cleaned_word].first > max_count)
        {
            max_count = word_map[cleaned_word].first;
            most_repeated_word = word_map[cleaned_word].second;
        }
    }

    // Output the results
    cout << longest_word << endl;
    cout << shortest_word << endl;
    cout << most_repeated_word << endl;

    return 0;
}
