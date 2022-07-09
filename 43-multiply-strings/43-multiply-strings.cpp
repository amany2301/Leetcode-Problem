class Solution {
public:
    string multiply(string n1, string n2) {
        string ans="";
        vector<int>v(n1.size()+n2.size(),0);
        for(int i=n1.size()-1;i>-1;i--){
            for(int j=n2.size()-1;j>-1;j--){
                v[i+j+1]+=(n1[i]-'0')*(n2[j]-'0');
                v[i+j]+=v[i+j+1]/10;
                v[i+j+1]%=10;
            }
        }
        bool got=false;
        for(int i=0;i<v.size();i++){
            if(!got and v[i]!=0) got=true;
            if(got) ans+=to_string(v[i]);
        }
        if(!ans.size()) return "0";
        return ans;
    }
};