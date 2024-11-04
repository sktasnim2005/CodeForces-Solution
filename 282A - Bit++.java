import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        int T = scanner.nextInt();
        int x = 0; 
        
        while (T-- > 0) {
            String s = scanner.next();
            
            if (s.equals("++X") || s.equals("X++")) {
                x++;
            } else {
                x--;
            }
        }
        
        System.out.println(x);
        scanner.close();
    }
}
