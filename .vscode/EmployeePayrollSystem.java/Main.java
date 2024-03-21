/*import java.util.ArrayList;
abstract class Employee{

    private String name;
    private int Id;

    // USing Constructor: corresponding name & id will assign
    public Employee(String name, int Id){
        this.name = name;  // this keyword : corresponding value ko assign krta hain.
        this.Id = Id;      // id will store to the corresponding once 
    }
    // In encapsulation we studied getter and setter method
    //get can easily check the value any variable without accessing the value.
  // user phale getname ko call karega phir get jakar name ki value ko la kar dega 
    public String getname(){
        return name;
    }

    public int getId(){
        return Id;
    }
    // Above All of these public method
    // Now,we will going to make abstract method 
    // Abstraction ko hum abstruct method and abstract class ki help se achieve kr skte hain.
    
    // Abstract method ko bas declare kar ke chorr kete or hum abstract method ka body provide nhi karte.let see
     // Aur abstract method mein phale abstract lagta hain.
    public abstract double calculateSalary();//  ye hume salary calculate kar ke dega.
    
    @Override
    public String toString(){
        return "Employee [name="+name+", id="+id+", salary="+calculateSalary()+"]";
    }

}

class FullTimeEmployee extends Employee{

    private double monthlySalary;

    public FullTimeEmployee(String name, int id, double monthlySalary){
        // Super method : use to inherit the parent class
        super(name,id);
        this.monthlySalary = monthlySalary;
    }

    @Override
    public double calculateSalary(){
        return monthlySalary;
    }

}

class PartTimeEmployee extends Employee{
    private int hoursWorked;
    private double hourlyRate;

    public PartTimeEmployee(String name, int id, int hoursWorked, double hourlyRate){
        super(name,id);
        this.hourWorked = hoursWorked;
        this.hourlyRate = hourlyRate;
    }

    @Override
    public double calculateSalary(){
        return hoursWorked * hourlyRate;
    }
}
// ArrayList Syntax : ArrayList<like integer data type> = new ArrayList<>();  
class PayrollSystem{
    //ArrayList<data type:Employee>
    // Array definte size ki hoti aur List definite size nhi hoti hain.
    //List jaise full hone wali hoti hain o apne size ko double kar leti hain mo need to length.
    private ArrayList<Employee> employeeList;

    //Making Constructor
    public PayrollSystem (){
        employeeList = new ArrayList<>(); // Basically 'new' ek constructor banata hain aur ek new memory allocate karta hain store karne ke liye.
    }

    public void addEmployee(Employee employee){
        employeeList.add(employee);
    }

    public void removeEmployee(int id){
        Employee employeeToRemove = null;

        // Using For-each loop
       for ( Employee employee : employeeList) {
        if (employee.getId()==id) {
            employeeToRemove = employee;
            break;
        }
        
       }
       if (employeeToRemove != null) {
        employeeList.remove(employeeToRemove);
        
       }
    }

    public void displayEmployees(){
        for(Employee employee: employeeList){
            System.out.println(employee);
        }
    }
}

public class Main {
    public static void main(String[] args) {
      PayrollSystem payrollSystem = new PayrollSystem();
      FullTimeEmployee emp1 = new FullTimeEmployee(rahul, 1, 50000);
      PartTimeEmployee emp2 = new PartTimeEmployee(Ram, 2, 5, 100);  
    
      payrollSystem.addEmployee(emp1);
      payrollSystem.addEmployee(emp2);
      System.out.println("Initial Employee Details: ");
      payrollSystem.displayEmployees();
      System.out.println("Removing Employees");
      payrollSystem.removeEmployee(2);
      System.out.println("Remaining Employees DEtails: ");
      payrollSystem.displayEmployees();


    
    }
    
}
*/

import java.util.ArrayList;

abstract class Employee {
    private String name;
    private int id;

    public Employee(String name, int id) {
        this.name = name;
        this.id = id;
    }

    public String getName() {
        return name;
    }

    public int getId() {
        return id;
    }

    public abstract double calculateSalary();

    @Override
    public String toString() {
        return "Employee [name=" + name + ", id=" + id + ", salary=" + calculateSalary() + "]";
    }
}

class FullTimeEmployee extends Employee {
    private double monthlySalary;

    public FullTimeEmployee(String name, int id, double monthlySalary) {
        super(name, id);
        this.monthlySalary = monthlySalary;
    }

    @Override
    public double calculateSalary() {
        return monthlySalary;
    }
}

class PartTimeEmployee extends Employee {
    private int hoursWorked;
    private double hourlyRate;

    public PartTimeEmployee(String name, int id, int hoursWorked, double hourlyRate) {
        super(name, id);
        this.hoursWorked = hoursWorked;
        this.hourlyRate = hourlyRate;
    }

    @Override
    public double calculateSalary() {
        return hoursWorked * hourlyRate;
    }
}

class PayrollSystem {
    private ArrayList<Employee> employeeList;

    public PayrollSystem() {
        employeeList = new ArrayList<>();
    }

    public void addEmployee(Employee employee) {
        employeeList.add(employee);
    }

    public void removeEmployee(int id) {
        Employee employeeToRemove = null;

        for (Employee employee : employeeList) {
            if (employee.getId() == id) {
                employeeToRemove = employee;
                break;
            }
        }

        if (employeeToRemove != null) {
            employeeList.remove(employeeToRemove);
        }
    }

    public void displayEmployees() {
        for (Employee employee : employeeList) {
            System.out.println(employee);
        }
    }
}

public class Main {
    public static void main(String[] args) {
        PayrollSystem payrollSystem = new PayrollSystem();
        FullTimeEmployee emp1 = new FullTimeEmployee("rahul", 1, 70000);
        PartTimeEmployee emp2 = new PartTimeEmployee("Ram", 2, 5, 4000);

        payrollSystem.addEmployee(emp1);
        payrollSystem.addEmployee(emp2);
        System.out.println("Initial Employee Details: ");
        payrollSystem.displayEmployees();
        System.out.println("Removing Employees");
        payrollSystem.removeEmployee(2);
        System.out.println("Remaining Employees Details: ");
        payrollSystem.displayEmployees();
    }
}











