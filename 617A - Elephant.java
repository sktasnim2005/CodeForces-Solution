import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int n = scanner.nextInt();
        int step = 0;

        while (n > 0) {
            n -= 5;
            step++;
        }

        System.out.println(step);

        scanner.close();
    }
}
