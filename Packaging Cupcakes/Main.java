import java.util.Scanner;

public class Main() {
    public static void main(Strings [] args) {
        Scanner scanner = new Scanner(System.in);

        int t = scanner.nextInt();

        while (t-- > 0) {
            int n = scanner.nextInt();
            System.out.println(n / 2 + 1);
        }

        scanner.close();
    }
}