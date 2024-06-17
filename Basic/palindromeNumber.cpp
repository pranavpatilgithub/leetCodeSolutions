class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        
        long int reverse,last;
        long int dup = x;
        while(x>0){
            last = x % 10;
            reverse = reverse*10 + last;
            x = x/10;
        }
        
        return reverse == dup;
    }
};
