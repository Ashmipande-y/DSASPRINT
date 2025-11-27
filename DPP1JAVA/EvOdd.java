package DPP1JAVA;

import java.util.Scanner;

public class EvOdd {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);

        int n=sc.nextInt();
        int last=n%10;

        System.out.println(last);
        System.out.println(last%2);
    }
    
}
