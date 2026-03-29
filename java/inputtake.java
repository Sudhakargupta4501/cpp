//package java Scanner;
import java.util.Scanner;

public class inputtake {
     public static void main(String[] args) {
        
         Scanner Sc = new Scanner(System.in);
         System.out.println("enter age");
         int age= Sc.nextInt();
         System.out.println("your age is " + age);
         System.out.println(Sc);

         // for double vale
          System.out.println("enter the average " );
          double avg = Sc.nextDouble(); 
          System.out.println("enter the average " + avg);

          System.out.println("enter the name");
          String name=Sc.nextLine(); 
          System.out.println("enter the name" + name);
           // for  that we can use of next only insteed of nexrLine
           System.out.println("enter naaame" );
           String naaame=Sc.next();
           System.out.println("your name is a  =" + naaame);
     }
    
} /* 
 package javaScanner;
 import java.util.Scanner;
  public class input{
     public static void main(String[] args) {
         Scanner sc = new Scanner(System.in);
         System.out.println("enter age");
         int age = sc.nextInt();
         System.out.println("enter your age is");
     }
 }*/
