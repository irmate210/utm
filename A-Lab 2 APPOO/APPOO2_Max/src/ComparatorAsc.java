import java.util.Comparator;

public class ComparatorAsc implements Comparator<Masini>{
    public int compare(Masini m1, Masini m2){
        return m1.getBrand().compareTo(m2.getBrand());
    }
}
