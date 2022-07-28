class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSum = INT_MIN;
        int tSum = 0;
        for(int i=0;i<nums.size();i++){
            tSum+=nums[i];
            maxSum = max(maxSum,tSum);
            if(tSum<0){
                tSum=0;
            }
        }
        return maxSum;
    }
};