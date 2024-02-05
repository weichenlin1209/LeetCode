#include <bits/stdc++.h>
using namespace std;

int lengthOfLongestSubstring(string s) 
{
    vector<char> v;
        int maxLength = 0;
        for(char &c : s)
        {
            vector<char>::iterator p = std::find(v.begin(), v.end(), c);

            if(p != v.end())
            {
                maxLength = (v.size() > maxLength) ? v.size() : maxLength;
                while(v[0] != c)
                {
                    v.erase(v.begin());
                }
                v.erase(v.begin());
            }
            v.push_back(c);
        }

        maxLength = (v.size() > maxLength) ? v.size() : maxLength;
        return maxLength;
    
    
}

