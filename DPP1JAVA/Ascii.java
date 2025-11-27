package DPP1JAVA;

import java.util.Scanner;

public class Ascii {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        char a=sc.next().charAt(0);
        char b=sc.next().charAt(0);

        System.out.println((int)(b-a));
    }
    
}
