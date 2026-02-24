import java.util.Scanner;

public class DivisibleBy12 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter a number: ");
        int num = sc.nextInt();

        int temp = num, sum = 0;

        while (temp > 0) {
            sum += temp % 10;
            temp /= 10;
        }

        boolean div3 = (sum % 3 == 0);
        boolean div4 = ((num % 100) % 4 == 0);

        if (div3 && div4)
            System.out.println(num + " is divisible by 12");
        else
            System.out.println(num + " is not divisible by 12");
    }
}
