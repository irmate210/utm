
public class Masini {
    private String brand;
    private String model;
    private double price;

    public Masini(String brand, String model, double price){
        this.brand = brand;
        this.model = model;
        this.price = price;
    }

    public void setBrand(String brand){
        this.brand = brand;
    }

    public String getBrand(){
        return this.brand;
    }

    public void setModel(String model){
        this.model = model;
    }

    public String getModel(){
        return this.model;
    }

    public void setPrice(double price){
        this.price = price;
    }

    public double getPrice(){
        return this.price;
    }

    @Override
    public String toString(){
        return "["+this.brand+"|"+this.model+"|"+this.price+"$]";
    }
}
