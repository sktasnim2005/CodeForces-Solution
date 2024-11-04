import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        String s = scanner.next();
        
     
        String result = s.substring(0, 1).toUpperCase() + s.substring(1); // s.substring(1) this part is for continue from 2nd charecter 
        
        System.out.println(result);
        
        scanner.close();
    }
}
