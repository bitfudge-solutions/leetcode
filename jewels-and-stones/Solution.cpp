class Solution {
public:
  int numJewelsInStones(const string &jewels,
                        const string &stones) {
    bool jewels_i_have[52] = {false};
    int count(0);

    for (const char jewel: jewels) {
      if ('A' <= jewel && jewel <= 'Z')
        jewels_i_have[jewel - 'A'] = true;
      else if('a' <= jewel && jewel <= 'z')
        jewels_i_have[(jewel - 'a') + 26] = true;
    }

    for (const char stone: stones) {
      if ((('A' <= stone && stone <= 'Z') && jewels_i_have[stone - 'A']) ||
          (('a' <= stone && stone <= 'z') && jewels_i_have[(stone - 'a') + 26]))
        ++count;
    }

    return count;
  }
};
