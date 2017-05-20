import java.util.Comparator;

public class ComparatorDesc implements Comparator<Masini> {
    public int compare(Masini m1, Masini m2){
        return m2.getBrand().compareTo(m1.getBrand());
    }
}
