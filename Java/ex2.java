import java.util.*;

class ex2 {
    public static void main(String[] args) {
        int sum = 0;
        int marks[] = {45, 67, 89, 90, 54};

        System.out.print("Marks: ");

        for (int i = 0; i < marks.length; i++) {
            System.out.print(" "+ marks[i]);  
            sum += marks[i];            
        }

        int avg = sum / marks.length;    

        System.out.println("\nTotal = " + sum);
        System.out.println("Average = " + avg);
    }
}