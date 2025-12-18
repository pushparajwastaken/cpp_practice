import java.io.File;
import java.io.FileReader;
import java.io.IOException;

 class CheckedExample {
    public static void main(String[] args) {
        try {
            FileReader fr = new FileReader("data.txt");
        } catch (IOException e) {
            System.out.println("File not found or cannot be read");
        }
    }
}
 class UncheckedExample {
    public static void main(String[] args) {
        int a = 10;
        int b = 0;
        System.out.println(a / b); // ArithmeticException
    }
}
