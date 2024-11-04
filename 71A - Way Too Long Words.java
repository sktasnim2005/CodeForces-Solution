import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        int T = scanner.nextInt();
        scanner.nextLine(); 
        
        for(int i=0;i<T;i++) {
            String word = scanner.nextLine();
            int length = word.length();
            
            if (length > 10) {
                System.out.printf("%c%d%c%n", word.charAt(0), length - 2, word.charAt(length - 1));
            } else {
                System.out.println(word);
            }
        }
        
        
    }
}
