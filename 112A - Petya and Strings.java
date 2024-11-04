import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        String x = scanner.next();
        String y = scanner.next();

        x = x.toLowerCase();
        y = y.toLowerCase();

        if (x.compareTo(y) < 0) {
            System.out.println("-1");
        } 
        else if (x.compareTo(y) > 0) {
            System.out.println("1");
        } 
        else {
            System.out.println("0");
        }

        scanner.close();
    }
}
