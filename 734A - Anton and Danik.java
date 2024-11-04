import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int n = scanner.nextInt();
        String s = scanner.next();
        
        int a = 0, d = 0;

        for (int i = 0; i < s.length(); i++) {
            if (s.charAt(i) == 'A') {
                a++;
            } else if (s.charAt(i) == 'D') {
                d++;
            }
        }

        if (a > d) {
            System.out.println("Anton");
        } else if (a < d) {
            System.out.println("Danik");
        } else {
            System.out.println("Friendship");
        }

        scanner.close();
    }
}
