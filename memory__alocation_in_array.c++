#include<iostream>
using namespace std;
  class shop
  {
      private:
      int itemid[100];
      int itemprize[100];
      int counter;
        public:
void initconter(void)
{
    counter =0;
}

void setprize(void);
void displayprize(void);
  };
  void shop :: setprize(void)
  {
      cout<<"entrer id ="<<counter+1<<endl;
      cin>>itemid[counter];
      cout<<"enter prize of your item =121"<<endl;
      cin>>itemprize[counter];
      counter ++;
  }
  void shop :: displayprize(void)
  {  for(int i=0;i<counter;i++)
  {
      cout<<"the prize of you item"<<" "<<itemid[i]<<" is"<<" ""= "<<itemprize[i]<<endl;
  }

  }
int main()

{ shop dukan;
dukan.initconter();
 dukan.setprize();
 dukan.setprize();
 dukan.setprize();
 dukan.displayprize();


return 0;
}