class ex6 {
    String firstName = "Pradeep";
    String lastName = "R";
    int age = 20;
    int empId = 101;
    double salary = 25000.0;

    public static void main(String[] args) {

        ex6 emp1 = new ex6();

        emp1.firstName = "Jai";
        emp1.lastName = "Kumar";
        emp1.age = 25;
        emp1.empId = 102;
        emp1.salary = 30000.0;

        System.out.println("First Name : " + emp1.firstName);
        System.out.println("Last Name  : " + emp1.lastName);
        System.out.println("Age        : " + emp1.age);
        System.out.println("Employee ID: " + emp1.empId);
        System.out.println("Salary     : " + emp1.salary);
    }
}