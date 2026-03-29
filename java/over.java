 class calci{
    public int add(int n1,int n2){
         
         int result = n1+n2;
         return result ;
        }   
        
     public int add(int n1,int n2,int n3){
            int res = n1*(n2*n3);
            return res;
            
        }
        public int add2(int n1, int n2){
            int res2 = n1/n2;
            return res2;
        }
        
    

 }


public class over { 
    public static void main(String[] args) {
           calci obj = new calci();
           int result = obj.add(30,20);
           System.out.println(result); 
          int res = obj.add(12,3,4) ;
          System.out.println(res);

          int res2 = obj.add2(36,9);
          System.out.println(res2);

    }
    
}
