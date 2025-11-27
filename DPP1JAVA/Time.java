package DPP1JAVA;

import java.util.Scanner;

public class Time {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);

        int mins=sc.nextInt();
        System.out.println(mins/60+" "+mins%60);
    }
    
}
