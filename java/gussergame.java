import java.util.*;
class gusser{
    int gessnum;  // guss and tore over here
    int gussingnumber(){  // method number
        Scanner scan = new Scanner(System.in);
        System.out.println("plz gess the no and store");
        //System.out.println(scan); 
        gessnum = scan.nextInt();
        return gessnum;


    }
}
class player{
     int gussnum;
     int gussingnumber()
     {
      Scanner scan = new Scanner(System.in);
      System.out.println("plz enter the gussing num of player");
      gussnum = scan.nextInt();
      return gussnum;
     }
}
class umpire{
    int numberFromgusser;
    int numberFromPlayer1;
    int numberFromPlayer2;
    int numberFromPlayer3;     
    int numberFromPlayer4;
   void collectnumberFromgusser()
   {
    gusser g =new gusser();
     numberFromgusser = g.gussingnumber();

   }

    void collectnumberFromPlayer()
    {
    player p1 =new player();
    player p2 =new player();
    player p3 = new player();
    player p4 = new player();

    numberFromPlayer1 = p1.gussingnumber();
    numberFromPlayer2 = p2.gussingnumber();
    numberFromPlayer3 = p3.gussingnumber();
    numberFromPlayer4 = p4.gussingnumber();
    
     }

     void compare (){

     if (numberFromgusser == numberFromPlayer1)
     {
         System.out.println("player one is winner");
     }
     else if (numberFromgusser == numberFromPlayer2)
     { 
           System.out.println("player 2 is winner");

     } else if(numberFromgusser == numberFromPlayer3)
     {
      System.out.println("player3 is winner");
     }
     else if(numberFromgusser == numberFromPlayer4)
     {
        System.out.println("player 4 is winner");
     }

     else {
        System.out.println(" oops.. compuer is winner");
     }
   }

}
public class gussergame {
    public static void main(String[] args) {
          System.out.println("game strart");
            umpire u =new umpire();
            u.collectnumberFromgusser();
            u.collectnumberFromPlayer();
            u.compare();
        
    }
    
}
