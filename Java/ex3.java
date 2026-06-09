import java.util.*;

class ex3 {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        System.out.print("Enter First Name: ");
        String firstName = sc.nextLine();

        System.out.println("First Name : " + firstName);
        System.out.println("Length     : " + firstName.length());
        System.out.println("Uppercase  : " + firstName.toUpperCase());
        System.out.println("Uppercase  : " + firstName.toLowerCase());

        sc.close();
    }
}   