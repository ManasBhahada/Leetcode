class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        sort(knowledge.begin(), knowledge.end());
        string ans="";
        string key="";
        bool open=false;
        for (int i=0;i<s.length();i++) {
            if(s[i] == '('){
                open = true;
                key = "";
            } else if(s[i]==')'){
                open=false;
                int l=0;
                int r=knowledge.size()-1;
                bool found=false;
                while(l<=r){
                    int mid=l+(r-l)/2;
                    if(knowledge[mid][0] == key){
                        ans+=knowledge[mid][1];
                        found=true;
                        break;
                    }else if(knowledge[mid][0] < key){
                        l = mid + 1;
                    }else{
                        r=mid-1;
                    }
                }
                if(!found){
                    ans+="?";
                }
            } else{
                if(open){
                    key+=s[i];
                }else{
                    ans+=s[i];
                }
            }
        }
        return ans;
    }
};