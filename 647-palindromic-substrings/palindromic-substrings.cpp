class Solution {
public:
    int countSubstrings(string s) {
        int resLen=s.length();
        for(int i=0;i<s.length();i++){
            //for odd palindrome
            for(int j=1;(i-j>=0 && i+j<s.length());j++){
                if(s[i-j]==s[i+j]){
                    resLen++;
                }
                else{
                    break;
                }
            }
            //for even palindrome
            for(int j=0;(i-j>=0 && i+j+1<s.length());j++){
                if(s[i-j]==s[i+j+1]){
                   resLen++;
                }
                else{
                    break;
                }
            }
        }
        return resLen;
    }
};