class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.length() == 0){
            return 0;
        }
        int answer = INT_MIN;
        int count = 0;
        map<char,int> mp; //Store character and its index found
        for(int i = 0;i<s.length();){
            if(mp.find(s[i]) == mp.end()){
                count++;
                mp[s[i]] = i;
                answer = max(answer,count);
                i++;
            } else {
                count = 0;
                i = mp[s[i]] + 1;
                mp.clear();  
            }
        }
        return answer;
    }
};
