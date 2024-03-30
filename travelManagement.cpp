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
{
  private:
    int cabChoice;
    int kilometers;
    float cabCost;
    float lastcabCost;
    
  public:
    void cabDetails()
     {
       cout<<"We collaborated with fastest, safest, and smartest cab service arround the country"<<endl;
       cout<<"---------ABS Cabs---------\n"<<endl;
       cout<<"1. Rent a standard Cab - Rs.15 for 1KM"<<endl;
       cout<<"2. Rent a luxury Cab - Rs.25 per 1KM"<<endl;

       cout<<"\nTo calculate cost for your jurney:"<<endl;
       cout<<"Enter which kind of cab you need:";
       cin>>cabChoice;
       cout<<"Enter kilometers you have to travel:";
       cin>>kilometers;

       int hireCab;
/**/   if(cabChoice == 1)
        {
         lastcabCost = kilometers*15;
         cout<<"\nYour tour cost "<<cabCost<< " rupees for a Standard Cab"<< endl;
         cout<<"Press 1 to hire this cab: or ";
         cout<<"Press 2 to select another cab: ";
         cin>>hireCab;

         system("cls");

         if(hireCab == 1)
          {
            lastcabCost = cabCost;
            cout<<"\nYou have successfully hired a Standard cab"<<endl;
            cout<<"Goto Menu & take the receipt"<<endl;
          }
         else if(hireCab==2)
          {
            cabDetails();
          }
         else
          {
            cout<<"Invalid Input ! Redirecting to previous Menu \n Please Wait!"<<endl;
            Sleep(1100);
            system("cls");
            cabDetails();
          } 
        }
  /**/  else
        {
          cout<<"Invalid Input ! Redirecting to Main Menu \n Please Wait!"<<endl;
          Sleep(1100);
          system("cls");
          //menu();
        }
          cout<<"\nPress 1 to Redirect Main Menu: ";
          cin>>hireCab;
          system("cls");
          if(hireCab==1)
           {
            //menu(); 
           }
          else
           {
            //menu();
           }
     }
};

class Booking
{};

class Charges
{};

//******************************MAIN********************************
main()
{
  return 0;
}