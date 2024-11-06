import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int n = scanner.nextInt();
        int count = 0;

        for (int i = 0; i < n; i++) {
            int x = scanner.nextInt();
            if (x == 1) {
                count++;
            }
        }

        if (count > 0) {
            System.out.println("HARD");
        } else {
            System.out.println("EASY");
        }

        scanner.close();
    }
}
