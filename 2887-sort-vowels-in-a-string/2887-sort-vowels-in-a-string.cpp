class Solution {
public:
    string sortVowels(string s) {
        vector<char>vowels;
        vector<int>positions;
        for(int i=0;i<s.size();i++){
            if(s[i]=='A' || s[i]=='a' || s[i]=='E' || s[i]=='e' || s[i]=='I' || s[i]=='i' || s[i]=='O' || s[i]=='o' || s[i]=='U' || s[i]=='u'){
                vowels.push_back(s[i]);
                positions.push_back(i);
            }
        }
        sort(vowels.begin(),vowels.end());
        for(int i=0;i<positions.size();i++) s[positions[i]]=vowels[i];
        return s;
    }
};