class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int k = 0;
        if(n ==0 ){
            return n;
        }

        for(int i=0; i<=nums.size()-1; i++){
            if(nums[k] != nums[i]){
                k++;
                nums[k] = nums[i];
            }
        }
        
        
        return k+1;
    }
};
