class Solution {
public:
  vector<int> numberOfLines(vector<int> &widths, string S) {
    vector<int> result;
    int line_count(0);
    int character_count(0);

    for (const char c: S) {
      int count(widths[c - 'a']);

      if ((character_count + count) > 100) {
        ++line_count;
        character_count = count;
      } else
        character_count += count;
    }

    if (character_count)
      ++line_count;

    result.push_back(line_count);
    result.push_back(character_count);

    return result;
  }
};
