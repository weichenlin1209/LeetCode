#include <bits/stdc++.h>
using namespace std;

string longestPalindrome(string s);

int main()
{
    cout << longestPalindrome("a");
}

string longestPalindrome(string s) 
    {
        int left;
        int right; 
        int radius = -100;
        string process_s = " ";
        for(char c : s)
        {
            string k;
            process_s += k+c+" ";
        }

        for(int c = 1; c < process_s.length()-1; c++)
        {
            bool flag = true;
            int r = 1;

            while(flag == true)
            {
                if(process_s[c+r] == process_s[c-r] && c >= r && c + r < process_s.length())
                {
                    r++;
                }
                else
                {
                    flag = false;
                    r -= 2;
                }
            }

            if(r > radius)
            {
                radius = r;
                left = (c - r) / 2 ;
                right = (c + r) / 2;
            }
        }

        string ans;
        for(int i = left; i <= right; i++)
        {
            ans += s[i];
        }

        return ans;
    }