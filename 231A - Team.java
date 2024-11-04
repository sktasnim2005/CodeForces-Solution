import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        int n = scanner.nextInt();
        int[][] matrix = new int[n][3];
        
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < 3; ++j) {
                matrix[i][j] = scanner.nextInt();
            }
        }

        int count = 0;
        for (int i = 0; i < n; ++i) {
            int ones = 0; 
            for (int j = 0; j < 3; ++j) {
                if (matrix[i][j] == 1) {
                    ones++;
                }
            }
            if (ones >= 2) {
                count++;
            }
        }

        System.out.println(count);
        scanner.close();
    }
}
