class Solution {
public:
    int numberOfSubstrings(string s) {
        map<char,int>mp;
        int ans=0,i=0;
        for(int j=0;j<s.length();j++){
            mp[s[j]]++;
                while(mp.size()==3&&i<=j){
                    mp[s[i]]--;
                    ans+=s.length()-j;
                    if(mp[s[i]]==0)
                    mp.erase(s[i]);
                    i++;
                }
            
        }
            return ans;
        }
        
};