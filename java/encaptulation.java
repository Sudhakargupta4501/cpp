class student{
      private int age;
       private String name;
       void setdata(){ // private varialr are use in same class 
         age=12;
         name="sidd";
       }
   void show(){
       System.out.println(age +" "+ name);
   }
    // right click + then go to spurce code then go to getting
    // getter and setter metod then  click on this generate getter and setter medthod
    // autometically
    public int getAge() {
    return age;
}
public void setAge(int age) {
    this.age = age;
}
public String getName() {
    return name;
}
public void setName(String name) {
    this.name = name;
}
      
}


 public class encaptulation

{ public static void main(String[] args) {
    
     student obj = new student();
   //  obj.age=12;
     //obj.name="siddhu";
     obj.setdata();
     obj.show();
}

}