public class pattern4 {
    public static void main(String[] args) {

        int n = 10 ;
        for(int i  = 1 ; i<n ;i++)
        {
            for (int j = 1 ; j<n ; j++)
            {
               if (i==0 && j>0 && j<(n-1)/2 || j==0 && i>0 ||i==(n-1)/2 && j<=(n-1)/2 || j==(n-1)/2 && i>0)
               {
                System.out.print("#");
               }
               else 
               {
                       System.out.print(" ");
               }
            
            }
               System.out.println();

        }
      
}
    
}
