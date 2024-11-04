import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int a = scanner.nextInt();
        int b = scanner.nextInt();
        int c = 0;
        
        while (a <= b) {
            a *= 3;
            b *= 2;
            c++;
        }

        System.out.println(c);

        scanner.close();
    }
}
