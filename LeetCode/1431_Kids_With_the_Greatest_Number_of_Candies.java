import java.util.ArrayList;
import java.util.List;

public class Solution {
    public List<Boolean> kidsWithCandies(int[] candies, int extraCandies) {
        int mx = candies[0];
        for (int i = 0; i < candies.length; i++) {
            if(candies[i]>mx){
                mx = candies[i];
            }
        }
        List <Boolean> tf = new ArrayList<Boolean>();
        for (int i = 0; i < candies.length; i++) {
            if(candies[i]+extraCandies>=mx){
                tf.add(true);
            }else{
                tf.add(false);
            }
        }
        return tf;
    }
}
