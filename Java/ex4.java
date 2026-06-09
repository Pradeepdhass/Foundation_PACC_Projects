import java.util.*;

class ex4 {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        System.out.print("Enter your name: ");
        String name = sc.nextLine();

        System.out.println("\n----- String Operations -----");
        System.out.println("Name            : " + name);
        System.out.println("Length          : " + name.length());
        System.out.println("Uppercase       : " + name.toUpperCase());
        System.out.println("Lowercase       : " + name.toLowerCase());
        System.out.println("First Character : " + name.charAt(0));
        System.out.println("Last Character  : " + name.charAt(name.length() - 1));
        System.out.println("Substring(0,3)  : " + name.substring(0, 3));
        System.out.println("Contains 'a'    : " + name.contains("a"));
        System.out.println("Starts With 'P' : " + name.startsWith("P"));
        System.out.println("Ends With 's'   : " + name.endsWith("s"));
        System.out.println("Index of 'a'    : " + name.indexOf('a'));
        System.out.println("Last Index 'a'  : " + name.lastIndexOf('a'));
        System.out.println("Replace a -> @  : " + name.replace('a', '@'));
        System.out.println("Is Empty?       : " + name.isEmpty());
        System.out.println("Trim            : " + name.trim());

        String another = "Java";
        System.out.println("Concat          : " + name.concat(" " + another));
        System.out.println("Equals 'Java'   : " + name.equals("Java"));
        System.out.println("Equals Ignore Case 'java' : "
                           + name.equalsIgnoreCase("java"));

        sc.close();
    }
}