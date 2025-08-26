class Solution {
public:
    int sumDigits(int n){
        int sum=0;

        while(n>0){
            int rem=n%10;
            sum+=(rem*rem);
            n=n/10;
        }

        return sum;
    }
    bool isHappy(int n) {

        unordered_set<int>st;
        while(true){

            int ans=sumDigits(n);

            if(ans==1)
            return true;

            else if(st.count(ans))
            return false;

            else{
                st.insert(ans);
                n=ans;
            }
        }

        return true;
    }
};