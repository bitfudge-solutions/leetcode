class Solution {
public:
  int arrayPairSum(vector<int> &numbers) {
    int result(0);

    sort(numbers.begin(), numbers.end());

    for (vector<int>::iterator i(numbers.begin()); numbers.end() != i; result += *i, i += 2);

    return result;
  }
};
