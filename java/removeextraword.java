//package in.ineuron.main;  it is a package of idle
import java.util.Scanner;
public class removeextraword {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        System.out.println("plz enter any String");
       String s1= scan.next();
       String s2 ="";
       for(int i=0;i<=s1.length();i++){
        boolean iduplicate=false;
         for(int j=i+1;j<s2.length();j++){
            if(s1.charAt(i)==s2.charAt(j)){
                System.out.println(s1.charAt(i));
                iduplicate = true;
                break;

            }

         }
         if(!iduplicate){
            s2=s2+s1.charAt(i);
         }
       }

System.out.println(s2);

    }
    
}
