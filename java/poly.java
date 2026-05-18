class aeroplane{
    public void fly(){
        System.out.println("fly at the hight of the top");

    }
    public void takeoff(){
        System.out.println("now readdy to take off the plne");
        
    }


}
class cargoplane  extends aeroplane
{
     public void fly(){
        System.out.println("cargo plane is ready to fly ");
     }
     public void takeoff(){
          System.out.println("hipp hip hurray ");

     }
}

class fighterplane extends aeroplane
{
     public void fly(){
        System.out.println("cargo plane is ready to fly ");
     }
     public void takeoff(){
          System.out.println("hipp hip hurray ");

    
     }  

} // new method is prepare for the polymorphisum it can inherate all the function of the class in one method
class airoport{
    public void pol(aeroplane ref){
        ref.fly();
        ref.takeoff();
        System.out.println("--------------------------");
         
    }


}


public class poly {
     public static void main(String[] args) {
          aeroplane a= new aeroplane();
          cargoplane cp = new cargoplane();// insteed of crgoplane fist you write the name of the prant class
          fighterplane fp = new fighterplane();
          
        //   a.fly();
        //   a.takeoff();
        //   cp.fly();
        //   cp.takeoff();
        //   fp.fly();
        //   fp.takeoff();
          airoport ap= new airoport();
          ap.pol(cp);
          ap.pol(fp);
          // pass the addres of the cp it would be execiuted no need tpo write many times

        
     }
}
