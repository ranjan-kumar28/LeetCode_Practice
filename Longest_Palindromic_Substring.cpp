class Solution {
public:
    string longestPalindrome(string s1) {
        if(s1.size() < 2)
            return s1;
        
        int i=0,j=0,k=0,l=1,s=0;
        while(k<s1.size()-l/2){
            j=k;
            while(s1[k]==s1[k+1])
                ++k;
            i = k;
            while(k<s1.size() && j>0 && s1[k+1]==s1[j-1]){
                ++k;
                --j;
            }
            if(k-j+1 >l){
                l=k-j+1;
                s=j;
            }
            k=i+1;
        }
        return s1.substr(s,l);
    }
};