class Solution {
public:
    vector<vector<int>> buildMatrix(int k, vector<vector<int>>& rowCond, vector<vector<int>>& colCond) {
        vector<int>indRow(k,0);
        vector<int>indCol(k,0);
        vector<vector<int>>adjRow(k);
        vector<vector<int>>adjCol(k);
        for(auto x: rowCond)
        {
            indRow[x[1]-1]++;
            adjRow[x[0]-1].push_back(x[1]-1);
        }
        for(auto x: colCond)
        {
            indCol[x[1] -1 ]++;
            adjCol[x[0] -1].push_back(x[1]-1);
        }
        queue<int>q;
        for(int i=0;i<k;i++)
        {
            if(indRow[i]==0) q.push(i);
        }
        vector<int>topoRow;
        while(!q.empty())
        {
            int top = q.front();
            q.pop();
            topoRow.push_back(top);
            for(auto x : adjRow[top])
            {
                indRow[x]--;
                if(indRow[x]==0)
                {
                    q.push(x);
                }
            }
        }
        // for(auto x: topoRow) cout << x << " ";
        // cout << endl;
        queue<int>q1;
        for(int i=0;i<k;i++)
        {
            if(indCol[i]==0) q1.push(i);
        }
        vector<int>topoCol;
        while(!q1.empty())
        {
            int top = q1.front();
            q1.pop();
            topoCol.push_back(top);
            for(auto x : adjCol[top])
            {
                indCol[x]--;
                if(indCol[x]==0)
                {
                    q1.push(x);
                }
            }
        }
        // for(auto x: topoCol)
        // {
        //     cout <<x<<" ";
        // }
        // cout <<endl;
        if(topoRow.size()<k || topoCol.size() < k) return {};
        vector<vector<int>>res(k, vector<int>(k,0));
        // res[0] = topoCol;
        vector<int>len(k);
        for(int i=0;i<k;i++)
        {
            len[topoCol[i]] = i;
        }
        for(int i=0;i<k;i++)
        {
            res[i][len[topoRow[i]]]=topoRow[i]+1;
        }
        return res;
    }
};