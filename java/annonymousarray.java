  class sum{
      public int add(int x,int y){
          int result = x+y;
          return result;


       }
  }

public class annonymousarray {
    public static void main(String[] args) {
         sum obj = new sum();
         int result = obj.add(5,8);
         

          System.out.println(result);
    }
    
}
