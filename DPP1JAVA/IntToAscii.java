package DPP1JAVA;

import java.util.Scanner;

public class IntToAscii {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int x = sc.nextInt();      // Enter an integer ASCII value
        System.out.println((char)x);   // Convert and print character
    }
}
