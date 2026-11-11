class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> detector(int('z' - 'a') + 1, 0);
        for(auto it:s){
            detector[int(it - 'a')]++;
        }
        for(auto it:t){
            if(detector[int(it - 'a')] > 0){
                detector[int(it - 'a')]--;
            } else {
                return false;
            }
        }
        for(auto it:detector){
            if(it > 0){
                return false;
            }
        }
        return true;
    }
};
