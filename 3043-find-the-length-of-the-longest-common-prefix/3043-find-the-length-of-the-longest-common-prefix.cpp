class TrieNode{
    public:
    vector<TrieNode*> children;
    TrieNode(){
        children.resize(10,NULL);
    }
};


class Solution {

    void fill(TrieNode* t,int index,string s){
        if(index==s.length())return;
        TrieNode* &node= (t->children)[s[index]-'0'];
        if(!node){
             node= new TrieNode();
        }
        fill(node,index+1,s);
    }

    void createTrie(TrieNode* t,vector<int> &v){
        for(auto &num:v){
            fill(t,0,to_string(num));
        }
    }

    int traverse(TrieNode* t1,TrieNode* t2){
        if(!t1 || !t2) return 0;
        auto children1= t1->children;
        auto children2= t2->children;
        int res=0;
        for(int i=0;i<10;i++){
            if(children1[i] && children2[i]){
                res= max(res, 1+traverse(children1[i],children2[i]));
            }
        }
        return res;
    }

public:
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
        TrieNode* t1= new TrieNode();
        TrieNode* t2= new TrieNode();
        createTrie(t1,arr1);
        createTrie(t2,arr2);
        return traverse(t1,t2);
    }
};