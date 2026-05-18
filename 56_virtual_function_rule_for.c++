#include<iostream>
#include<cstring>
using namespace std;
class siddhu{
    protected:
    string title;
    float rating;
    public :
    siddhu(string s , float r){
        (title = s) ;
        rating = r;  
        // strcpy is a function that is use to copy the string
    }
   virtual void display(){};
};
class siddhuvideo :public siddhu{
  int videolength;
  public :
  siddhuvideo(string s ,float r ,float vl) : siddhu( s ,r) {
      videolength = vl;
  } 
  void display(){
      cout<<"This is a amaging video"<<title<<endl;
      cout<<"rating of  = "<<rating<<"out of five star"<<endl;
      cout<<"length of the video is = "<<videolength<<endl;
  }

};
class siddhutext : public siddhu{
int textlength;
public :
siddhutext(string s , float r ,int tl) : siddhu( s ,r){
    textlength = tl;
}
void display(){
    cout<<"This is a amaging video"<<title<<endl;
      cout<<"rating of is ="<<rating<<"out of five star"<<endl;
      cout<<"no of the worde length = "<<textlength<<endl;
}
};

int main()
{string  title ;
float rating ,vlen;
int textlength;
// this is for video
title ="  sididhu programer ";
vlen = 4.67;
rating = 4.89;
siddhuvideo djvideo(title , rating , vlen);
djvideo.display();
// this is for text

title ="sididhu programer ";
textlength = 47;
rating = 4.89;
siddhutext djtext(title , rating , textlength);
djtext.display();
    
    siddhu* tut[2];
    tut[0] = &djvideo;
    tut[1] = &djtext;
    tut[0] -> display();
    tut[1] ->display();
return 0;
}


 /* RULE FOR VIRTUAL FUNCTION
 1. they cant be stastic
 2. they can be acces by using object pointer
 3.virtuaal function can be friend of another class
 4. a virtual function is base class might not be class
 5.if the virtual function is define in a base class there is no necessity 
 of redefining it in the derived class Rani*/