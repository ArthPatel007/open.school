import java.util.Scanner;

public class prog3 {
    public static double doSum(int n) {
        double i = 1, sum = 0;
        while (i <= n) {
            sum = sum + (1 / i);
            i++;
        }
        return sum;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter The Number");
        int n = sc.nextInt();
        double s = doSum(n);
        System.out.println("Sum Is %f==>" + s);
        sc.close();
    }
}
