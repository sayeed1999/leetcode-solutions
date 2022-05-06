class Solution {
public:
    string sortSentence(string s) {
    int last = 0;
    int n = s.size();
    int i=0, j=1;
    bool b = 0;

    string ret = "";
    while(true)
    {
        b = false;
        last = 0;
        for(i=0; s[i]; i++)
        {
            if(s[i]==' ') last = i+1;
            else if(s[i]>='1' && s[i]<='9')
            {
                if(int(s[i]-'0')==j)
                {
                    if(ret.size()>0) ret += " ";
                    ret += s.substr(last, i-last);
                    b = true;
                    j++;
                    break;
                }
            }
        }
        if(!b) break;
    }
    return ret;
    }
};