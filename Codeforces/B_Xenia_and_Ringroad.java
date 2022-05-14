import java.util.Scanner;

public class XenaiAndRingroad {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        long n = in.nextInt();
        long m = in.nextInt();
        long[] num = new long[(int) m];
        for (int i = 0; i < m; i++) {
            num[i] = in.nextInt();
        }
        long ans = 0, cnt = 1;
        for (int i = 0; i < m ; i++) {
            if(num[i]<cnt){
                ans+=num[i]-cnt+n;
                cnt = num[i];
            }else{
                ans+=num[i]-cnt;
                cnt = num[i];
            }
        }
        System.out.println(ans);
    }
}
