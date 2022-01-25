#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  vector<int> twoSum(vector<int> &nums, int target)
  {
    map<int, int> complementMap;
    vector<int> answer;

    for (int i = 0; i < nums.size(); i++)
    {
      int num = nums[i];
      int complement = target - num;

      if (complementMap.find(num) != complementMap.end())
      {
        auto p = complementMap.find(num);
        answer.push_back(p->second);
        answer.push_back(i);
      }
      complementMap.insert(make_pair(complement, i));
    }

    return answer;
  }
};