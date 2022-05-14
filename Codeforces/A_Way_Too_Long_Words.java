import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        while (t-->0){
            String s = in.next();
            if(s.length()<=10){
                System.out.println(s);
            }else{
                System.out.print(s.charAt(0));
                System.out.print(s.length()-2);
                System.out.println(s.charAt(s.length()-1));
            }
        }

    }
}
