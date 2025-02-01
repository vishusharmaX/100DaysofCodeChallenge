//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution { 
    using lookup_t = vector<vector<int>>;
    using mat_t = vector<vector<char>>;
    
    bool dfs(
          const mat_t& mat
        , const string& word
        , lookup_t& lookup
        , int idx
        , int x
        , int y
    )
    {
        
        // check if were in allowed block
        if(idx >= word.size()) return true;
        if(y < 0 || y >= mat.size()) return false;
        if(x < 0 || x >= mat[y].size()) return false;
        if(lookup[y][x] != 0) return false;
        
        if(word[idx] != mat[y][x]) return false;
        
        lookup[y][x] = 1;
        
        if(
             dfs(mat, word, lookup, idx + 1, x + 1, y)
          || dfs(mat, word, lookup, idx + 1, x - 1, y)
          || dfs(mat, word, lookup, idx + 1, x, y + 1)
          || dfs(mat, word, lookup, idx + 1, x, y - 1)
        ) {
            return true;
        }
        
        lookup[y][x] = 0;
        return false;
    }
    
  public:
    bool isWordExist(const mat_t& mat, string& word) 
    {
        vector<vector<int>> lookup(mat.size(), vector<int>(mat[0].size(), 0));
        
        for(int y{0}; y < mat.size(); y++)
        {
            for(int x{0}; x < mat[y].size(); x++)
            {
                if(dfs(mat, word, lookup, 0, x, y)) {
                    return true;
                }
            }
        }
        
        return false;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        vector<vector<char>> mat(n, vector<char>(m, '*'));
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cin >> mat[i][j];
        string word;
        cin >> word;
        Solution obj;
        bool ans = obj.isWordExist(mat, word);
        if (ans)
            cout << "true\n";
        else
            cout << "false\n";

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends