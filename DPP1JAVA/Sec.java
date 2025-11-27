package DPP1JAVA;

import java.util.Scanner;

public class Sec {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);

        int s=sc.nextInt();
        int h=s/3600;
        int m=(s%3600)/60;
        int sec=s%60;

        System.out.println(h+" "+m+" "+sec);
    }
    
}
