#include<iostream.h>
#include<conio.h>
#include<math.h>


class calculator
{
public:
    int x,y,z;
private:
    int num;
public:
    void show()
{
   cout<<endl;
   cout<<"enter the numbers(1,2,3..) to proceed operations"<<endl;
  cout<<"1 for +"<<endl;
  cout<<"2 for -"<<endl;
  cout<<"3 for *"<<endl;
  cout<<"4 for /"<<endl;
  cout<<"5 for Sq.root"<<endl;
  cout<<"6 for %"<<endl;
  cin>>num;
  switch(num)
  {
  case 1: cout<<"addition"<<endl;
	  add();
	  show();

	  break;
  case 2: cout<<"subtraction"<<endl;
	  subtract();
	  show();
	  break;
  case 3: cout<<"multiply"<<endl;
	  multiply();
	  show();

	  break;
  case 4: cout<<"divide"<<endl;
	  divide();
	  show();
	  break;
  case 5: cout<<"square root"<<endl;
	  square();
	  show();
	  break;
 case 6: cout<<"percentage"<<endl;
	  percentage();
	  show();
	  break;
  default: cout<<"invalid"<<endl;
	  break;
  }
 }

private:
     int add()
{
    int n,i,z=0;
  long   int arr[100];
  cout<<endl;
    cout<<"enter the number of digits to add"<<endl;
    cin>>n;
    cout<<"enter digits to add";
    for(i=0;i<n;i++)
       cin>>arr[i];
    for(i=0;i<n;i++)
       z=arr[i]+z;
    cout<<"sum is = "<<z<<endl;
    return 0;
}

private:
       int subtract ()
{
	   int n,i;
    long int arr[100];
			      //	int z = x -y

    cout<<"enter the number of digits to subtract"<<endl;
    cin>>n;
    cout<<"enter digits to subtract";
    for(i=0;i<n;i++)
       cin>>arr[i];
  int x,temp;
    int z=0;
    for(i=0;i<n;i++)
    {
      if(arr[0]>0)
       {
	  x=arr[0]-2*arr[0];
	  temp = arr[0];
	  arr[0]=x;
       }
      else if(arr[0]<0)
       {
	 x=arr[0]-2*arr[0];
	 temp=arr[0];
	 arr[0]=x;

       }
       z=z-arr[i];
//       cout<<z<<" ";


    }
   cout<<"Difference is = "<<z;
    return 0;
   }
private:
     int multiply()
  {
    int n,i,z=1;
   long int arr[100];
    cout<<"enter the number of digits to multiply"<<endl;
    cin>>n;
    cout<<"enter digits to multiply";
    for(i=0;i<n;i++)
       cin>>arr[i];
    for(i=0;i<n;i++)
       z=z*arr[i];
    cout<<"product is = "<<z;
    cout<<endl;
    return 0;
}
private:
     int divide()
  {
    double divd,divr;
    double  z;

 cout<<"enter digits to divide"<<endl;
  cout<<"digit 1= "<<endl;
  cin>>divd;
   cout<<"digit 2= "<<endl;
  cin>>divr;
    z=divd/divr;
    cout<<"divide is = "<<z;
  cout<<z;
    return 0;
}
 private:
   void square()
   {
   double a;
     cout<<"enter digit to obtain square root"<<endl;
     cin>>a;
     z=sqrt(a);
     cout<<z<<endl;
     }

 private:
     void percentage()
     {
	double val;
	double total,per;
	cout<<"enter digit to calculate percentage"<<endl;
	cin>>val;
	cout<<"enter total"<<endl;
	cin>>total;
	per=(val*100)/total;
	cout<<per<<endl;
	}

};


  void main()
{
  clrscr();
  calculator C;
  C.show();
  getch();
}


