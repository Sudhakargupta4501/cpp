public class stringconcept {
    public static void main(String[] args) {
         String s1 ="siddhu";
         System.out.println(s1);
         // it is a immutable string you dont make crrection over there as you like
         s1.concat("Gupta");
         System.out.println(s1);  // it can be run but it not show your desire output 
         //it will shoe only siddhu 2 times not show gupta so it is a unmutable string
          


         StringBuffer s12 = new StringBuffer("siddhu Ramesh");
         System.out.println(s12);
         s12.append("Gupta");  // we cannot use the concate insteed of that we can use the append
         System.out.println(s12);
         StringBuilder s3 = new StringBuilder("siddhu Ramesh");
         System.out.println(s3);

                           // *** main concept**
             String a1 = "sidd";
             String a2="sidd";
             System.out.println(a1==a2);
             // it will show true becvause in hea[ memory one another section is for
             // string constant tool in the sectuion duplicate is not allow that why both od a1 and 
             // a2 is refer to same address] 
             // one importnt things is that now present of garbej collector in string constant tool
             String a3 = new String("sidd");
             String a4 = new String ("sidd");
             // here it will show false because n heap ,memory both a3 and a4 have its own file space 
             // create both are not same
             System.out.println(a3==a4);

             String q1 = "siddhu";
             String q2 ="siddhu" +"gupta";
             String q3 = "siddhu" +"gupta"+"ramesh";
             String q4 = q1+q2;
             System.out.println(q1);    
             System.out.println(q2);
             System.out.println(q3);
             System.out.println(q4);
             
            // iif you use the concat then you add the one string with the help of the conacate function
            // iff you use the + plus operator then you can add many string AT A TIME
    }
    
}
