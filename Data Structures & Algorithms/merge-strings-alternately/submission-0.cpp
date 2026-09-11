class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int l1=word1.size(),l2=word2.size();
        int n=min(l1,l2);
        string s="";
        for(int i=0;i<n;i++){
            s+=word1[i];
            s+=word2[i];
        }
        if(l1>l2){
            s+=word1.substr(n,l1-n);
        }
        else{
            s+=word2.substr(n,l2-n);
        }
        return s;
    }
};