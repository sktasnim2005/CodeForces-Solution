import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int k = scanner.nextInt();
        int w = scanner.nextInt();
        int n = scanner.nextInt();

        int sum = 0;
        for (int i = 1; i <= n; ++i) {
            sum += i * k;
        }

        int z = sum - w;
        if (z < 0) {
            System.out.println("0");
        } else {
            System.out.println(z);
        }

        scanner.close();
    }
}
