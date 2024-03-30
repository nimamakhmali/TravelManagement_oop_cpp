//***********************************************************
//    Nima Makhmali -------> Buali sina university of IRAN❤️
//***********************************************************
#include <iostream>
#include <fstream>
#include <iomanip>
#include <windows.h>

using namespace std;

class Customers
{
  private:
   string name , gender , address;
   int age , mobileNo , cusID;
   char all[999];
  public:
   void detDetails()
    {
      ofstream out("old-customers.txt" , ios::app );
       {
        cout<<"Enter Customer ID : ";
        cin>>cusID;
        cout<<"Enter Name : ";
        cin>>name;
        cout<<"Enter Mobile Number : ";
        cin>>mobileNo;
        cout<<"Enter Address : ";
        cin>>address;
        cout<<"Enter Gender : ";
        cin>>gender; 
       }   
       out << "\nCustomer ID: "<<cusID<<"\nName: "<<name<<"\nAge: "<<age<<"\nMobile Number: "<<mobileNo<<
         "\nAdress: "<<address<<"\nGender: "<<gender<<endl;
         out.close();
         cout<<"\nSaved \n Note: save your details record for future purposes\n"<<endl;
    }  
   void showDetails()
    {
      ifstream in("old-customers.txt");
       {
        if(!in)
         {
          cout<<"File Error!"<<endl;
         }
         while(!(in.eof()))
          {
            in.getline(all,999);
            cout<<all<<endl;
          }
          in.close();
       }
    }  
};

class Cabs
{};

class Booking
{};

class Charges
{};

//******************************MAIN********************************
main()
{
  return 0;
}