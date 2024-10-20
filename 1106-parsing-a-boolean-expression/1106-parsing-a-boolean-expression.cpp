class Solution {
public:

    void parseAND(stack<char>&st2)
    {
        bool result=1;
        while(st2.top()!='(')
        {
            result=result && (st2.top()=='t'? true : false);
            st2.pop();
        }
        st2.pop();
        st2.push(result==true ? 't' : 'f');
    }

    void parseOR(stack<char>&st2)
    {
        bool result=0;
        while(st2.top()!='(')
        {
            result=result || (st2.top()=='t'? true : false);
            st2.pop();
        }
        st2.pop();
        st2.push(result==true ? 't' : 'f');
    }

    void parseNOT(stack<char>&st2)
    {
        if(st2.top()=='t')
        {
            st2.pop();
            st2.pop();
            st2.push('f');
        }
        else
        {
            st2.pop();
            st2.pop();
            st2.push('t');
        }
    }

    bool parseBoolExpr(string ex) {
        stack<char>st1;
        stack<char>st2;

        for(int i=0;i<ex.size();i++)
        {
            if(ex[i]=='&' || ex[i]=='|' || ex[i]=='!')
            {
                st1.push(ex[i]);
            }
            else
            {
                if(ex[i]=='(' || ex[i]=='t' || ex[i]=='f')
                {
                    st2.push(ex[i]);
                }
                else if(ex[i]==',')continue;
                else
                {
                    char op=st1.top();
                    st1.pop();
                    if(op=='&'){
                        parseAND(st2);
                    }
                    else if(op=='|'){
                        parseOR(st2);
                    }
                    else {
                        parseNOT(st2);
                    }
                }
            }
        }
        if(st2.top()=='t')return true;
        return false;
    }
};