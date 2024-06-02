class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        int last, r=0, dup=x ;
        while(x > 0){
            last = x%10;
            x = x/10;
            if (r > (INT_MAX / 10) || (r == INT_MAX / 10 && last > 7)) {
                return false; // Overflow would occur
            }
            r = (r*10) + last;
        }
        
        return (r == dup);
    }
};
