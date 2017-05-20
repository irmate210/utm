import java.util.*;

public class Main {
    public static void main(String[] args){
        CustomSet multiset = new CustomSet();
        CustomSet result;
        CustomQueue q;
        String brand;
        Scanner keyboard = new Scanner(System.in);

        Masini m1 = new Masini("Mercedes","S550",90000);
        Masini m2 = new Masini("Lexus","is200",45000);
        Masini m3 = new Masini("BMW","X3",50000);
        Masini m4=  new Masini("Mercedes","W222",150000);
        Masini m5=  new Masini("Audi","A7",129000);
        Masini m6 = new Masini("Nissan","GTR35",65000);

        multiset.AddElement(m1);
        multiset.AddElement(m2);
        multiset.AddElement(m3);
        multiset.AddElement(m4);
        multiset.AddElement(m5);
        multiset.AddElement(m6);

        multiset.SortDescending();
        System.out.println("1,2,3 Set|Sort|Print: ");
        multiset.Print();
        System.out.println("4,5 Find|Place:");
        System.out.println("Input brand:");
        brand = keyboard.nextLine();
        q = multiset.OutputToQueue(brand);
        System.out.println("6 Print Queue:");
        q.Print();
        System.out.println("7,8 Sort|Print:");
        multiset.SortAscending();
        q.SortAsc();
        multiset.Print();
        q.Print();
        System.out.println("9,10 Merge|Print:");
        result = multiset.AddToList(q);
        result.Print();
        System.out.println("11 Count:");
        System.out.println("Input brand:");
        brand = keyboard.nextLine();
        System.out.println("Found: "+result.CountByBrand(brand));
        System.out.println("12 Find:");
        System.out.println("Input brand:");
        brand = keyboard.next();
        System.out.println(result.FindByBrand(brand));
    }
}
