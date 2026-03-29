public class plandirom {
    public static void main(String[] args) {
         // after revershing is it same or not   
         String str1 ="madam";
         String str2 = " ";
        /* if( str1==str2){
            System.out.println("it is a palindrom no");
         }
         else {
            System.out.println("it is not a palindrom");
         } */
         for( int i =str1.length()-1;i>=0;i++){
             str2=str2+str1.charAt(i);

         }
         if (str1.equals(str2))
         {
            System.out.println("it is a palindrom of the no");
         }
         else {
            System.out.println("it is not a palindrom of a no");
         }

    }
    
}
