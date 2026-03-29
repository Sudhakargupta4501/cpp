     // lengt vs length() are important for interview //
     // length is a property of an arrayof a class
     // while length() is a method of a string


public class array {
    public static void main(String[] args) {
        
       /* int a[] = {23,45,67,4};
        //or you may print like this or like this
        System.out.println(a[0]);
        System.out.println(a[1]);
        System.out.println(a[2]);
        System.out.println(a[3]);



             for(int i=0; i<=3;i++ ){
                System.out.println(a[i]);
             }
             */
             // now question is that hoe to creat a array 
             // it can created by the new keyword it can be store in the heap of memory
             int b[]= new int[4];
              b[0]=12;
              b[1]=13;
              b[3]=14;
              b[4]=99;

              /*int a[]={ 34,l6,78,90};
               system.out.println(a.length)
               //it will show the size  of a array of integer
                //use of length function length()
                 String name ="siddhu";
                   System.out.println(name.length()); // it will print the length of th string

               */
              // lenth vs length()
             // b[5]=55;
              for(int i=0;i<4;i++){
              System.out.println(b[i]);
              }
    }
    
    
}
