package DPP1JAVA;
import java.util.*;

public class Discout {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);

        double amount=sc.nextDouble();
        double percent=sc.nextDouble();

        double finalAmount=amount-(amount*percent/100);
        System.out.println(finalAmount);


    }
}
