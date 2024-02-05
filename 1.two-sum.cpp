#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) 
{
    map<int ,int> discovered;

    for(int i = 0; i < nums.size(); i++)
    {
        int to_find = target - nums[i];

        if(discovered.find(to_find) == discovered.end())
        {
           discovered[nums[i]] = i;
        }
        else
        {
            return vector<int>{discovered[to_find], i};
        }
    }

    return {};
}
