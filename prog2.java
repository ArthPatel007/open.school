import java.util.Scanner;

public class prog2{
    public static int calculatFact(int Number) {
        if (Number == 0 || Number == 1) {
            return 1;
        } else {
            return Number * calculatFact(Number - 1);
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter The Number");
        int Number = sc.nextInt();
        int fact = calculatFact(Number);
        System.out.println("Factorial Of Number==>" + fact);
        sc.close();
    }
}
