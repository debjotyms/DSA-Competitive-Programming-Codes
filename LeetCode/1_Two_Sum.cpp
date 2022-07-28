class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector <int> ans;
        vector <pair<int,int>> vp;
        
        for(int i=0;i<nums.size();i++){
            vp.push_back({nums[i],i});
        }
        
        sort(vp.begin(),vp.end());
        
        int i=0,j=nums.size()-1;
        while(i<j){
            if(vp[i].first+vp[j].first==target){
                ans.push_back(vp[i].second);
                ans.push_back(vp[j].second);
                break;
            }else if(vp[i].first+vp[j].first<target){
                i++;
            }else{
                j--;
            }
        }
        return ans;
    }
};