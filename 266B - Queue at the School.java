import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        int n = scanner.nextInt();
        int t = scanner.nextInt();
        String s = scanner.next();

        char[] arr = s.toCharArray();
        
        while (t-- > 0) {
            for (int i = 0; i < n - 1; i++) {
                if (arr[i] == 'B' && arr[i + 1] == 'G') {
                    char temp = arr[i];
                    arr[i] = arr[i + 1];
                    arr[i + 1] = temp;
                    i++; 
                }
            }
        }
        
        System.out.println(new String(arr));
        scanner.close();
    }
}
