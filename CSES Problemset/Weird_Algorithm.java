import java.util.Scanner;

public class Weird_Algorithm{
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        long a = in.nextLong();
        System.out.print(a+" ");
        while(a!=1){
            if((a&1)==0){
                a/=2;
            }else{
                a = (a*3)+1;
            }
            System.out.print(a+" ");
        }
    }
}