import java.util.Locale;
import java.util.Scanner;

public class Hello {
    public static void main(String[] args) {
        int y = 32;
        double p = 9.99;
        System.out.println("Hello World");
        System.out.println(y);
        System.out.printf("%.1f%n", p);
        Locale.setDefault(Locale.JAPANESE);
        System.out.println("Result:" + y);
        String name = "Marcia";
        int age = 42;
        double soldo = 9999;
        System.out.printf("%s Tem %d Anos e ganha %f",name,age,soldo);
        // %s string
        // %d igual a int
        // %f igual a double

        int x1 = 5;
        double x2 = 2.0;
        double resultado;
        resultado = (double) x1 / x2; // Isso é casting é "forçar" uma variavel.
        System.out.println(resultado);

        Scanner sc = new Scanner(System.in); // Input
        String x = sc.next();
        System.out.println(x);
        int t = sc.nextInt();
        System.out.println(t);
        String s1,s2,s3;
        sc.nextLine();
        s1 = sc.nextLine();
        s2 = sc.nextLine();
        s3 = sc.nextLine();
        System.out.println("Dados digitados: ");
        System.out.println(s1);
        System.out.println(s2);
        System.out.println(s3);
        sc.close();

    }
}
