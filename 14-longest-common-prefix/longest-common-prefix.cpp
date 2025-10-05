class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty()) return "";
        sort(strs.begin(),strs.end()); //isse lexicographical order mei sort hojayegi 
        string f= strs[0], l= strs.back(), ans = "";
        for(int i=0;i<min(f.size(),l.size());i++){
            if(f[i]==l[i]){
                ans+=f[i];
            }
            else break;
        }
        return ans;
    }  
};