import java.util.Scanner;

public class B_Queue_at_the_School {
    public static void main(String[] args) {
        int n,t;
        Scanner in = new Scanner(System.in);
        n = in.nextInt();
        t = in.nextInt();
        String studentsLine = in.next();
        String[] StudentsLineArray = studentsLine.split("");
        for (int i = 0; i < t; i++) {
            for (int j = 0; j < n-1; j++) {
                if(StudentsLineArray[j].equals("B") && StudentsLineArray[j+1].equals("G")){
                    String temp = StudentsLineArray[j];
                    StudentsLineArray[j] = StudentsLineArray[j+1];
                    StudentsLineArray[j+1] = temp;
                    j++;
                }
            }
        }
        for (int i = 0; i < n; i++) {
            System.out.print(StudentsLineArray[i]);
        }
    }
}

