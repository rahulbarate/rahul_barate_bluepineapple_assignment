import java.util.*;
import java.io.*;

class Book {
    String authorName;
    String publication;
    float price;

    Book(String authorName, String publication, float price) {
        this.authorName = authorName;
        this.publication = publication;
        this.price = price;

    }

    void display() {
        System.out.println("Book author " + this.authorName);
        System.out.println("Book publication " + this.publication);
        System.out.println("Book price " + this.price);
    }
}

public class BookMange {
    public static void main(String[] args) throws Exception {

        HashMap<String, Book> map = new HashMap<String, Book>();
        BufferedReader input = new BufferedReader(new InputStreamReader(System.in));
        while (true) {
            System.out.print("1.Add Book\n2.display all\n3.search book\n4.delete book\n5.exit\nEnter Choice : ");
            int ch = Integer.parseInt(input.readLine());
            switch (ch) {
                case 1:
                    String bname, aname, pub;
                    int price;

                    System.out.println("Enter book name : ");
                    bname = input.readLine();
                    System.out.println("Enter book author : ");
                    aname = input.readLine();
                    System.out.println("Enter book publication : ");
                    pub = input.readLine();
                    System.out.println("Enter book price : ");
                    price = Integer.parseInt(input.readLine());

                    if (!bname.isEmpty() && !aname.isEmpty() && !pub.isEmpty()) {
                        if (!map.containsKey(bname))
                            map.put(bname, new Book(aname, pub, price));
                        else
                            System.out.println("\nBook Already Exists.");
                    }
                    break;
                case 2:
                    for (Map.Entry<String, Book> m : map.entrySet()) {
                        System.out.println("\n-----------Book Details------------\n");
                        System.out.println("Book Name " + m.getKey());
                        // Book b = m.getValue();
                        m.getValue().display();

                        // m.getValue().display();

                    }
                    break;
                case 3:
                    System.out.println("Enter Book name : ");
                    bname = input.readLine();
                    if (map.containsKey(bname)) {
                        System.out.println("Book Name : " + bname);
                        map.get(bname).display();
                    } else {
                        System.out.println("\nBook not found!");

                    }
                    break;
                case 4:
                    System.out.println("Enter Book name : ");
                    bname = input.readLine();
                    if (map.containsKey(bname)) {

                        map.remove(bname);
                        System.out.println("\nBook Removed");
                    } else
                        System.out.println("\nBook Not Found");
                    break;
                case 5:
                    System.exit(0);
                default:
                    System.out.println("\nInvalid Input");
            }
        }

    }
}
