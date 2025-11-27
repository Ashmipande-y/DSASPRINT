package DPP1JAVA;
import java.util.*;
public class Decimal {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        double d=sc.nextDouble();

        int intPart=(int) d;
        double decimal=d-intPart;
        System.out.println(decimal);
        
    }
    
    
}
