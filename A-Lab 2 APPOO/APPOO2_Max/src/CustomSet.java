import java.util.*;

public class CustomSet {
    private Set<Masini> set;

    CustomSet(){
        this.set = new LinkedHashSet<>();
    }

    void AddElement(Masini obj){
        set.add(obj);
    }

    Set<Masini> GetSet(){
        return set;
    }

    void setSet(Set<Masini> set){
        this.set = set;
    }

    Set<Masini> FindByBrand(String brand){
        Set<Masini> temp = new LinkedHashSet<>();
        for(Masini obj:set){
            if(obj.getBrand().equals(brand)){
                temp.add(obj);
            }
        }
        return temp;
    }

    CustomQueue OutputToQueue(String brand){
        Set<Masini> stemp = this.FindByBrand(brand);
        CustomQueue qtemp = new CustomQueue();
        if(stemp.size()!=0){
            System.out.println("Found:");
            for(Masini obj : stemp){
                System.out.println(obj);
                qtemp.AddElement(obj);
                this.set.remove(obj);
            }
        }
        else{
            System.out.println("Nothing Found!");
        }
        return qtemp;
    }

    void SortAscending(){
        List temp = new ArrayList<Masini>();
        temp.addAll(this.set);
        temp.sort(new ComparatorAsc());
        this.set.clear();
        this.set.addAll(temp);
    }

    void SortDescending(){
        List temp = new ArrayList<Masini>();
        temp.addAll(this.set);
        temp.sort(new ComparatorDesc());
        this.set.clear();
        this.set.addAll(temp);
    }

    void Print(){
        System.out.println("Print Multiset");
        for(Masini obj: set){
            System.out.println(obj);
        }
    }

    int CountByBrand(String brand){
        int count = 0;
        for(Masini obj : set){
            if (obj.getBrand().equals(brand)) {
                count += 1;
            }
        }
        return count;
    }

    void WriteToQueue(Queue<Masini> q){
        q.addAll(set);
    }

    CustomSet AddToList(CustomQueue q){
        CustomSet result = new CustomSet();
        for(Masini obj : this.set){
            result.AddElement(obj);
        }
        for(Masini obj : q.GetQueue()){
            result.AddElement(obj);
        }
        return result;
    }
}
