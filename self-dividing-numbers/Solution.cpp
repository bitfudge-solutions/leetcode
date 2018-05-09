class Solution {
private:
  bool is_self_dividing(int n) {
    for (int check(n); check; check /= 10) {
      int digit(check % 10);

      if (!digit || (n % digit))
        return false;
    }

    return true;
  }
  
public:
  vector<int> selfDividingNumbers(int left, int right) {
    vector<int> result;

    for (int i(left); i <= right; ++i)
      if (is_self_dividing(i))
        result.push_back(i);
      
    return result;
  }
};
