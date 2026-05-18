#include<iostream>
using namespace std;
int linearsearch(int arr[], int size, int element)
{ int i;
	for( i>0;i<size;i++)
	{
		if(arr[i]==element)
		{ return 1;
		}
	} return 2;
};
int main()
{    int size;
 int arr[7]= {1,23,65,89,98,678,890};
int element=65;
int searchindex = linearsearch( arr, element)
{

 cout<<"the element d was found in the function"<<element<<searchindex<<endl;
}
return 0
}