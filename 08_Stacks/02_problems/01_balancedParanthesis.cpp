#include <bits/stdc++.h>
#include <stack>
using namespace std;

bool balancedParanthesis(string s)
{
    stack<char> st;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[')
        {
            st.push(s[i]);
        }
        else
        {
            if (st.empty())
                return false;
            char ch = st.top();
            st.pop();
            if ((s[i] == ')' && ch == '(') || (s[i] == '}' && ch == '{') || (s[i] == ']' && ch == '['))
            {
                continue;
            }
            else
                return false;
        }
    }
    return st.empty();
}

int main()
{

    string s;
    cin >> s;
    cout << balancedParanthesis(s) << endl;
    return 0;
}