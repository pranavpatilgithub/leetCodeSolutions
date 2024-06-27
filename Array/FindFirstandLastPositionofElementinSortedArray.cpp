class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> v(2,-1);
        int count=0 , flag=0;
        for(int i=0;i<nums.size(); i++){
            if(nums[i] == target){
                count++;
                flag = i;
            }
        }
        if(count != 0){
            v.erase(v.begin(),v.end());
            v.insert(v.begin(),(flag-(count-1)));
            v.insert(v.end(), flag);
        }
        return v;
    }
};
