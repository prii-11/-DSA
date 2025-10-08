class Solution {
private:
    bool isVowel(char c)
    {
        if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u' 
        || c=='A' || c=='E' || c=='I' || c=='O' || c=='U') return true;
        return false;
    }
public:
    string reverseVowels(string s)
    {
        int i=0;
        int j=s.length()-1;
        while(i<j)
        {
            if(!isVowel(s[i])) i++;
            else if (!isVowel(s[j])) j--;
            else
            {
                swap(s[i],s[j]);
                i++;
                j--;
            }
        }
        return s;
    }
};
 