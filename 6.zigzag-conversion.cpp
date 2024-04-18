#include <bits/stdc++.h>
using namespace std;

string convert(string s, int numRows);

int main()
{
    cout << convert("AB",1);
}

string convert(string s, int numRows) {
    if (numRows == 1) { return s;}
    int gap ,gap1 ,gap2 ,row;
    int pos = 0;
    int len = s.length();

    string result = "";

    gap = (numRows - 1) *2;
    for(gap2 = 0; gap2 <= gap; gap2 += 2)
    {
        row = gap2 / 2;
        gap1 = gap - gap2;

        pos = row;
        if (pos < len-1) {result += s[pos];}

        while(pos < len-1)
        {
            pos += gap1;
            if(pos < len && gap1 != 0) 
            {
                result += s[pos];
            }

            pos += gap2;
            if(pos < len && gap2 != 0) 
            {
                result += s[pos];
            }
        }
    }

    return result;
        
}