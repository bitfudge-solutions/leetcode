class Solution {
private:
  const string lookup[26] = {".-",   "-...", "-.-.", "-..",  ".",   "..-.",
                             "--.",  "....", "..",   ".---", "-.-",
                             ".-..", "--",   "-.",   "---",  ".--.",
                             "--.-", ".-.",  "...",  "-",    "..-",
                             "...-", ".--",  "-..-", "-.--", "--.."};
public:
  int uniqueMorseRepresentations(const vector<string> &words) {
    set<string> transformed_words;

    for (const string word: words) {
      string transformed_word;

      for (const char alphabet: word)
        transformed_word += lookup[alphabet - 'a'];

      transformed_words.insert(transformed_word);
    }

    return transformed_words.size();
  }
};
