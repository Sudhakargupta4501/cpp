public class reversingofstring {
    public static void main(String[] args) {
        
        String str1 = "Siddhu Gupta "; 
           // it is a concept mof the string function
        //System.out.println(str1.toUpperCase());
        //System.out.println(str1.lastIndexOf("a"  )); // 11 output
        // now reversiong of the  string
        String str2 =" " ;
        /*   for(int i = str1.length()-1 ; i>=0;i--){ // here lentrh is not a property but it is a method
                str2 = str2 + str1.charAt(i) ;


            }
            System.out.println(str2); 
            
            */
          //case 2   siddhu gupta == gupta siddhu

           String sarr[] = str1.split(" ");

             for(int i = sarr.length -1 ; i>=0;i--){   // length is not a metod but property
                str2 = str2 + sarr[i]+" " ;
             }
             System.out.println(str2);



    }
    
}
