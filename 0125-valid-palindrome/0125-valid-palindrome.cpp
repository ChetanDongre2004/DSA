class Solution {
public:
bool isAlphaNum(char ch)
{
    if(iswalnum(ch))
    {
        return true;
    } 
     return false;
}
    bool isPalindrome(string s) {
        int str=0, e=s.length()-1;
        while(str<e)
        {
            if(!isAlphaNum(s[str])){
                str++; continue;
            }
            if(!isAlphaNum(s[e])){
                e--; continue;

            }
            if(tolower(s[str])!= tolower(s[e]))
            {
                return false;
            }
            str++;
            e--;
        }
        return true;
        
    }
};