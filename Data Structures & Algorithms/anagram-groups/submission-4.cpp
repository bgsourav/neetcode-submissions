class Solution {
private: unordered_map<string, vector<string>> ump;
void convertAndPutInMap(string st){
    vector<int> arr(int('z' - 'a') + 1,0);
    for(auto it:st){
        arr[int(it - 'a')]++;
    }
    string ans = "";
    int count = 0;
    for(auto it:arr){
        ans = ans + "#" + to_string(it);
        count++;
    }
    // cout<<ans<<"\n";
    ump[ans].push_back(st);
    return;
}
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        for(auto it:strs){
            convertAndPutInMap(it);
        }
        for(auto it:ump){
            ans.push_back(it.second);
        }
        return ans;
    }
};
