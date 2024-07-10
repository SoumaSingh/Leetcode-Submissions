class Solution
{
public:
int fastio = [] {std::ios::sync_with_stdio(0); std::cin.tie(0); return 0; }();
    int minOperations(vector<string> &logs)
    {
        stack<string> st;
        for (string &s : logs)
        {
            if (s == "../")
            {
                if(!st.empty())
                    st.pop();
            }
            else if (s == "./")
                continue;
            else
                st.push(s);
        }
        return st.size();
    }
};