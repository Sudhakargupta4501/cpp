import java.util.Arrays;

public class anagram {
    public static void main(String[] args) {

          String str1 = "School Master";
          String str2 =" the Classroom ";  

            // first step to replace the white space 
          str1 =str1.replace(" ", "");
          str2 = str2.replace(" ", "");

        // in Second step to convert into the lower / upper case all the digit
          str1=str1.toLowerCase();
          str2=str2.toLowerCase();

         // make a array to store the all date 
          char []ar1 =str1.toCharArray();
          char []ar2 =str2.toCharArray();

          // short a;ll the array digit
          Arrays.sort(ar1);
          Arrays.sort (ar2);

          // to compare the THE program
             if( Arrays.equals(ar1, ar2)){
                System.out.println("it is a Arragram");
             }
             else{
                System.out.println("it is not a aragram");
             }


    }
    
}
