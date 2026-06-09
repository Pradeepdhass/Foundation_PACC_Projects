import java.util.*;

class ex5   {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        String[] names = {"John", "Mary", "David", "Elvin"};

        System.out.println("Names in the array:");
        
        for (String student : names) {
            System.out.println(student);
        }

        sc.close();
    }
}
