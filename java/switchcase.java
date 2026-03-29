public class switchcase {
    public static void main(String[] args) {
        int num = 100;
         switch( num){
             case 199 : System.out.println("caae 1 is running ");
             break;
             case 200 : System.out.println(" case 2 is running");
             break;
             case 100 : System.out.println("case 3 is running");
             // if case 3 is right then the  upcomming cases are also righ 
             // to stop this we can use of the break statement

             break;
             case 400 : System.out.println("case 4 is running");
             default : System.out.println("defualt case is runing now ");
             // if now any case is running then the defualt case is running 
         }  
        
        System.out.println();
    }
    
}
