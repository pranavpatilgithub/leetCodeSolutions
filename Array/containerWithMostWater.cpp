class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int area = 0 , maxArea = 0, x=0, y=0;
        vector<int> a;
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                x = j-i;
                y = min(height[i] , height[j]);
                area = x*y;
                if(area > maxArea){
                    maxArea = area;
                }
            }
            a.push_back(maxArea);
        }
        maxArea = *max_element(a.begin() , a.end());
        return maxArea;
    }
};

// above code take O(n2) time. So got Time limit exceeded.

class Solution {
public:
    int maxArea(vector<int>& height) {
        int area = 0, maxArea = 0, x=0, y=0;
        int left = 0, right = height.size() - 1;

        while(left < right){
            x = right - left;
            y = min(height[left] , height[right]);
            area = x*y;
            maxArea = max(maxArea , area);
            if(height[left] < height[right]){
             left++;
            }
            else{
             right--;
            }
        }
        
        return maxArea;
    }
};

// above code takes O(n) time and it is accepted.
