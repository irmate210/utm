import java.util.*;

public class CustomQueue {
    private Queue<Masini> queue;

    public CustomQueue(){
        this.queue = new LinkedList<>();
    }

    Queue<Masini> GetQueue(){
        return this.queue;
    }

    void AddElement(Masini obj){
        queue.add(obj);
    }

    void Print(){
        System.out.println("Print Queue");
        for(Masini obj : queue){
            System.out.println(obj);
        }
    }

    void SortAsc(){
        CustomSet temp = new CustomSet();
        for(Masini obj : queue) temp.AddElement(obj);
        temp.SortAscending();
        queue.clear();
        temp.WriteToQueue(queue);
    }


}
