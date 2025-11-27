package DPP1JAVA;
import java.util.*;
public class Con {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);

        double x=sc.nextDouble();
        int intPart=(int)x;
        double decPart=x-intPart;

        System.out.println(intPart);
        System.out.println(decPart);
        System.out.println(intPart+decPart);
    }
    
}
