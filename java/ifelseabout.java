public class ifelseabout {
    public static void main(String[] args) {

      int age =48 ;

       if(age>=18 && age<=60){
       // System.out.println("you are able to take the licence ");
             if( age<=20 && age>=30){
                 System.out.println(" you are in the 20 ");

             }
             else if (age <30 && age >=40){
              System.out.println("you are in 30 ");


             }
             else if ( age <40 && age>=50){
               System.out.println("you are in 40s");
             }
             else{
              System.out.println("you are in 50s");
             }

       }
       else if(age>=60){
        System.out.println("you are so much adult sorry aab ky keroge sikh ke ");
       }
       else{
        System.out.println("you are a kid and you don't drive the car");
       }

       // System.out.println();
    }
    
}
