class Solution {
public:
  bool judgeCircle(const string &moves) {
    int count[26] = {0};

    for (const char move: moves)
      ++count[move - 'A'];

    return 0 == (count['U' - 'A'] - count['D' - 'A']) &&
      0 == (count['L' - 'A'] - count['R' - 'A']);
  }
};
