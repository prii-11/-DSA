class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        int totalapples=0;
        for(int a : apple){
            totalapples+=a;
        }
        sort(capacity.begin(),capacity.end(),greater<int>());
        int curcapacity=0, count=0;
        for(int c: capacity){
            curcapacity+=c;
            count++;
            if(curcapacity>=totalapples)  return count;
        }
        return count;
    }
};