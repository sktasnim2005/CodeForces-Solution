import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        String s = scanner.next();
        int clow = 0, cup = 0;

        for (char c : s.toCharArray()) {
            if (Character.isUpperCase(c)) {
                cup++;
            } else {
                clow++;
            }
        }

        if (clow >= cup) {
            s = s.toLowerCase();
        } else {
            s = s.toUpperCase();
        }

        System.out.println(s);
        scanner.close();
    }
}
