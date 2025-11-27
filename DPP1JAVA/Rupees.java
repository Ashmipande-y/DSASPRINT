package DPP1JAVA;

import java.util.Scanner;

public class Rupees {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);

        int amt=sc.nextInt();
        System.out.println(amt/100);
        System.out.println(amt%100);
    }
    
}
