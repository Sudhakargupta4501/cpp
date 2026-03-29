 
 class twoDarray {
    public static void main(String[] args) {
        

        int num [][]= new int[3][2];
         num[1][1]=4;
        num[1][2]=5;
         num[2][1]=1;
         num[2][2]=8;
         num[3][1]=7;
         num[3][2]=5;
          //now you can put the value one by one but we use nested iff concept
           for(int i=0;i<3;i++){
            for(int j=0;j<2;j++){
              System.out.println(num[i][j]);  // see the answer
              System.out.print(num[i][j]);  // see the answer
              System.out.print(num[i][j]+" ");  // see the answer
            }
            // this sout is use th terminate the one loop 
            System.out.println(" ");

       }
    //    int nums [][]={
    //        {56,4,3},
    //        {5,6,7},
    //        {8,0,9}
    //    };
    //    System.out.println(nums.length);  
    //    // it will print only the 3 because one row is an a element
    //    // here we use the property of the length not length()
    //    // if we want to print the element of 1st row then we use the 
    //   System.out.println(nums[0].length);  // print the zero no of row of element


    //   //use of length function length()
    //   String name ="siddhu";
    //   System.out.println(name.length()); // it will print the length of th string

      
    
    
      }
        
    
}
