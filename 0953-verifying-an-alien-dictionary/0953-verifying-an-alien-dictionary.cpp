class Solution
{
    public:
        bool solve(string s, string t, map<char, int> mpp)
        {

            int n = s.length();
            int m = t.length();

            int i = 0;
            int j = 0;

            while (i < n && j < m)
            {
                if (s[i] != t[j])
                {
                    int sicheck = mpp[s[i]];
                    int sjcheck = mpp[t[j]];

                    if (sicheck < sjcheck)
                    {
                        return true;
                    }
                    else
                    {
                        return false;
                    }
                }

                i++;
                j++;
            }

            if (n > m)
            {
                return false;
            }

            return true;
        }
    bool isAlienSorted(vector<string> &words, string order)
    {
        map<char, int> mpp;
        for (int i = 0; i < order.size(); i++)
        {
            mpp[order[i]] = i;
        }

        for (int i = 0; i < words.size() - 1; i++)
        {
            if (solve(words[i], words[i + 1], mpp) == false)
            {
                return false;
            }
        }

        return true;
    }
};