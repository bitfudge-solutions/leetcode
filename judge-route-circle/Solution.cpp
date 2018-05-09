class Solution {
public:
  bool judgeCircle(const string &moves) {
    int x_movements(0);
    int y_movements(0);

    for (const char direction: moves) {
      if ('U' == direction)
        ++y_movements;
      else if ('D' == direction)
        --y_movements;
      else if ('L' == direction)
        --x_movements;
      else if ('R' == direction)
        ++x_movements;
    }

    return 0 == x_movements && 0 == y_movements;
  }
};
