class Solution {
    public int findNumbers(int[] nums) {
        int cnt = 0;
        for(int i:nums){
            if(even(i)){
                cnt++;
            }
        }
        return cnt;
    }
    boolean even(int i) {
        String s = Integer.toString(i);
        if(s.length()%2==0){
            return true;
        }else {
            return false;
        }
    }
}