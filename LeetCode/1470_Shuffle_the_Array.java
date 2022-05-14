class Solution {
    public int[] shuffle(int[] nums, int n) {
        int[] ans = new int[2*n];
        int k = 0;
        for (int i = 0, j = n; i < n; i++, j++) {
            ans[k] = nums[i]; k++;
            ans[k] = nums[j]; k++;
        }
        return ans;
    }
}