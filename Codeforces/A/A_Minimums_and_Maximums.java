import java.util.Scanner;

public class A_Minimums_and_Maximums {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        while (t-->0){
            int a = in.nextInt();
            int b = in.nextInt();
            int c = in.nextInt();
            int d = in.nextInt();
            int max = Math.max(a, c);
            if(max>b || max>d){
                System.out.println(a+c);
            }else{
                System.out.println(max);
            }
        }
    }
}

