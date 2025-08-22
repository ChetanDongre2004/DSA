class Solution {
public:
    string reverseOnlyLetters(string s) {
        int n=s.length();
        int st=0,e=n-1;
        while(st<e){
            if(!isalpha(s[st]))
            st++ ;// skip non alphabate
            else if(!isalpha(s[e]))
            e--;
            else{
                swap(s[st],s[e]);
                st++;
                e--;
            }
        }
        return s;
    }
};