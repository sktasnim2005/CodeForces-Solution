import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();
        
        for (int j = 0; j < T; j++) {
            int n = sc.nextInt();
            int[] a = new int[n];
            int sum = 0;
            
            for (int i = 0; i < n; i++) {
                a[i] = sc.nextInt();
                sum += Math.abs(a[i]);
            }
            
            System.out.println(sum);
        }
        
        sc.close();
    }
}
