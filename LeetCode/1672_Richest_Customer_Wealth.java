class Solution {
    public int maximumWealth(int[][] accounts) {
        int max = Integer.MIN_VALUE;
        for (int[] account : accounts) {
            int cnt = 0;
            for (int i : account) {
                cnt += i;
            }
            if (cnt > max) {
                max = cnt;
            }
        }
        return max;
    }
}