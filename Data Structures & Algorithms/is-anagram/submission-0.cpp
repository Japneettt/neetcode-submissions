class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size())
        {
            return false;
        }
        unordered_map<char,int> map1;
        unordered_map<char,int> map2;
        for(int i=0;i<s.size();i++)
        {
            map1[s[i]]++;
            map2[t[i]]++;
        }
       for(auto it:map1)
      {
        char temp=it.first;
        if(map1[temp]!=map2[temp])
         return false;
      }
      return true;
        
    }
};
