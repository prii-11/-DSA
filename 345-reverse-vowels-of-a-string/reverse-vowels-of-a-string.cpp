class Solution {
public:
    string reverseVowels(string s) {
       unordered_set<char>vowel={'a','e','i','o','u','A','E','I','O','U'};
       int left=0,right=s.size()-1;
       while(left<right){
        if(vowel.find(s[left])==vowel.end()){
            left++;
            continue;
        }
        if(vowel.find(s[right])==vowel.end()){
            right--;
            continue;
        }
        swap(s[left],s[right]);
        left++;
        right--;
       }
       return s;
    }
};