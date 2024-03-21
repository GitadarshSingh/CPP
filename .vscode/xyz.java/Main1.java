class Main {
    int data;
    Main next;

    Main(int data) {
        this.data = data;
        this.next = null;
    }
}

public class Main1 {
    // Method to insert a node at the end of the linked list
    public static Main insertEnd(Main head, int info) {
        Main newNode = new Main(info);
        
        if (head == null) {
            return newNode; // If the list is empty, set the new node as the head and return it
        }
        
        Main ptr = head;
        while (ptr.next != null) {
            ptr = ptr.next; // Traverse to the last node
        }
        
        ptr.next = newNode; // Set the new node as the next node of the last node
        return head; // Return the head of the updated list
    }

    // Method to print the linked list
    public static void display(Main head) {
        Main ptr = head;
        while (ptr != null) {
            System.out.print(ptr.data + " ");
            ptr = ptr.next;
        }
        System.out.println();
    }

    public static void main(String[] args) {
        Main head = null;
        head = insertEnd(head, 1);
        head = insertEnd(head, 2);
        head = insertEnd(head, 3);
        head = insertEnd(head, 4);
        head = insertEnd(head, 5);

        System.out.println("Linked List after insertion at end:");
        display(head);
    }
}
