package DPP1JAVA;

import java.util.Scanner;

public class Rev {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);

        int n=sc.nextInt();
        int a = n/10;
        int b = n%10;

        System.out.println(b*10+a);
    }
    
}
