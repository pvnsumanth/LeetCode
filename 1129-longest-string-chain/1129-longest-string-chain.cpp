class Solution {
public:
    static bool mycomp(string a,string b){
        return a.size()<b.size();
    }
    int longestStrChain(vector<string>& words) {
        sort(words.begin(),words.end(),mycomp);
        map<string,int>hash;
        int max_chain_len=0;
        for(auto word:words){
            hash[word]=1;
            for(int i=0;i<word.size();i++){
                string prev_word=word.substr(0,i)+word.substr(i+1);
                if(hash.find(prev_word)!=hash.end()){
                    hash[word]=max(hash[word],hash[prev_word]+1);
                }
            }
            max_chain_len=max(max_chain_len,hash[word]);
        }
        return max_chain_len;
    }
    
};