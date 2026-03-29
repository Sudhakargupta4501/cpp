public class objectcreation {

      int  num =8 ; // decleare the value of bydefault
      String name ="sakshi" ;  // decleare the value of bydefault
    public static void main(String[] args) {

        objectcreation obj = new objectcreation() ;
        obj. num =1; 
         
        // by deafult num  and name take the defualt value like   string have null and int have 0
        // you can create many object in s class
        System.out.println(obj.name);
        System.out.println(obj.num);   // see the output for the it can be show 1 
        System.out.println(obj.num);

        
    }

    
}
