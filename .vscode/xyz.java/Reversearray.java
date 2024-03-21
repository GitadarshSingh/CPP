/*import java .util.*;

public class Reversearray {
    private static void Reversearray(int arr)
    {
        int start = 0;
        int end = arr.length - 1;

        while (start < end) {
            int temp = arr[start];
            arr[start] = arr[end];
            temp = arr[end];

            start++;
            end--;
        }
    }
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the size of array: ");
        int size=sc.nextInt();
        int[]array = new int[size];

        System.out.print("Enter the elements of array: ");

        for(int i=0;i<size;i++)
        {
          System.out.print("Element"+(i+1)+":");
          array[i]=sc.nextInt();

        }
        System.out.println("Original Array: "+Array.toString(array));
        Reversearray(array);

        System.out.println("Reverse Array: "+Array.toString(array));
        sc.close();
    }
    
}*/
import java.util.*;

class ReverseArray {
    private static void reverseArray(int[] arr) 
    {
        int start = 0;
        int end = arr.length - 1;

        while (start < end) 
        {
            int temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;
            start++;
            end--;
        }
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter the size of array: ");
        int size = sc.nextInt();
        int[] array = new int[size];

        System.out.print("Enter the elements of array: ");
        for (int i = 0; i < size; i++) {
            System.out.print("Element " + (i + 1) + ": ");
            array[i] = sc.nextInt();
        }
        System.out.println("Original Array: " + Arrays.toString(array));
        reverseArray(array);
        System.out.println("Reversed Array: " + Arrays.toString(array));
        sc.close();
    }
}

