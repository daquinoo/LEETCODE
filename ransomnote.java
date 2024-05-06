// Given two strings ransomNote and magazine, return true if ransomNote can be constructed by using the letters from magazine and false otherwise.

// Each letter in magazine can only be used once in ransomNote.

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int> v(26);
        for(int i = 0; i < magazine.length(); i++){
            v[magazine[i]-'a']++;
        }
        for(int i = 0; i < ransomNote.length(); i++){
            v[ransomNote[i]-'a']--;
            if(v[ransomNote[i]-'a'] < 0)
                return false;
            
        }
       
        return true;
    }
};
