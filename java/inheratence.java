  class student{
      
   private int age=12;
    void sleep(){
        System.out.println("to kaise hai aap");
        System.out.println(age);

    }
     int set(){
         age=  age+12;
         return age;
     }
    public int getAge() {
        return age;
        
    }
    public void setAge(int age) {
        this.age = age;
        System.out.println("kaa ho kaa hall baa");
    }
  }
  class sidd extends student // extend in classs 
  {

  }


public class inheratence {
    public static void main(String[] args) {
        student st=new student();
      //  st.sleep();
       //st.getAge();
        //st.setAge(23);
        sidd si=new sidd();
        // concept of inheritance 
        si.sleep();
    }
    
}
