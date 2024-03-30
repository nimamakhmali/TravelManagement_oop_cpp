//***********************************************************
//    Nima Makhmali -------> Buali sina university of IRAN❤️
//***********************************************************
#include <iostream>
#include <fstream>
#include <iomanip>
#include <windows.h>

using namespace std;

void menu();

class ManageMenu
 {
  protected:
    string userName;
  public:
   ManageMenu()
    {
       system("color 0A");
       cout<<"\n\n\n\n\n\n\n\n\n\t  Enter Your Name to Continue as an Admin: ";
       cin>> userName;
       system("cls");
       menu();
    }
   ~ManageMenu()
    {
       
    }
 };

class Customers
{
  private:
   string name , gender , address;
   int age , mobileNo ;
   
  protected:
   int cusID;
   char all[999]; 
  public:
   void getDetails()
    {
      ofstream out("old-customers.txt" , ios::app );
       {
        cout<<"Enter Customer ID : ";
        cin>>cusID;
        cout<<"Enter Name : ";
        cin>>name;
        cout<<"Enter Age : ";
        cin>>age;
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
  protected:
    static float lastcabCost;
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
          menu();
        }
          cout<<"\nPress 1 to Redirect Main Menu: ";
          cin>>hireCab;
          system("cls");
          if(hireCab==1)
           {
            menu(); 
           }
          else
           {
            menu();
           }
     }
};

float Cabs::lastcabCost;/**/

class Booking
{
 private:
    int choiceHotel;
    int packChoice;  
  protected:
     static float hotelCost; 
  public:
    void hotels()
     {
      string hotelNo[]={"Avendra", "ChoiceYou", "ElephantBay",};
      for(int i=0 ; i<3; i++)
       {
        cout<<(i+1)<<". Hotel"<<hotelNo[i]<<endl;
       }
        cout<<"\nCurrently we collaborated with above hotels!"<<endl;

        cout<<"Press any key to back or\nEnter number of the hotel you want to book: ";
        cin>> choiceHotel;

        system("cls");

        if(choiceHotel == 1)
         {
           cout<<"-------WELCOME TO HOTEL AVENDRA-------\n"<<endl;
           cout<<"The Garden, food and beverage. Enjoy all you can drink. stay cool and get chilled in the summer sun."<<endl;
           cout<<"Packages offered by Avendra:\n"<<endl;
           cout<<"1. Standard Pack"<<endl;
           cout<<"\tAll basic facilities you need just for: Rs.5000.00"<<endl;
           cout<<"2. Premium Pack"<<endl;
           cout<<"\tEnjoy Premium: Rs.10000.00"<<endl;
           cout<<"3. Luxury Pack"<<endl;
           cout<<"\tLive a Luxury at avendra: Rs.15000.00"<<endl;
           cout<<"\nPress another key to back or \nEnter package number you want to book: ";
           cin>>packChoice;
            
            switch (packChoice)
            {
            case 1:
              hotelCost=5000.00;
              cout<<"\nYou have successfully booked Standard Pack at Avendra"<<endl;
              cout<<"\nGoto Menu and take the receipt"<<endl;
              break;
            case 2:
              hotelCost=1000.00;
              cout<<"\nYou have successfully booked Premium Pack at Avendra"<<endl;
              cout<<"\nGoto Menu and take the receipt"<<endl;
              break;
            case 3:
              hotelCost=15000.00;
              cout<<"\nYou have successfully booked Luxury Pack at Avendra"<<endl; 
              cout<<"\nGoto Menu and take the receipt"<<endl;
              break;
            default:
              cout<<"Invalid Input! Redirecting to Previous Menu \nPlease Wait!"<<endl;
              Sleep(1100);
              system("cls");
              hotels();
            }
              int gotomenu;            
              cout<<"\nPress 1 to redirect main menu:";
              cin>>gotomenu;
              if(gotomenu==1)
               {
                menu();
               }
              else 
               {
                menu();
               }
         }

        else if(choiceHotel == 2)
         {
           cout<<"-------WELCOME TO HOTEL CHOICEYOU-------\n"<<endl;
           cout<<"The Garden, food and beverage. Enjoy all you can drink. stay cool and get chilled in the summer sun."<<endl;
           cout<<"Packages offered by ChoiceYou:\n"<<endl;
           cout<<"1. Family Pack"<<endl;
           cout<<"\tAll basic facilities you need just for: Rs.5000.00"<<endl;
           cout<<"2. Couple Pack"<<endl;
           cout<<"\tEnjoy Premium: Rs.10000.00"<<endl;
           cout<<"3. Single Pack"<<endl;
           cout<<"\tLive a Luxury at ChoiceYou: Rs.15000.00"<<endl;
           cout<<"\nPress another key to back or \nEnter package number you want to book: ";
           cin>>packChoice;
            
            switch (packChoice)
            {
            case 3:
              hotelCost=5000.00;
              cout<<"\nYou have successfully booked Single Pack at ChoiceYou"<<endl;
              cout<<"\nGoto Menu and take the receipt"<<endl;
              break;
            case 2:
              hotelCost=1000.00;
              cout<<"\nYou have successfully booked Couple Pack at ChoiceYou"<<endl;
              cout<<"\nGoto Menu and take the receipt"<<endl;
              break;
            case 1:
              hotelCost=15000.00;
              cout<<"\nYou have successfully booked Family Pack at ChoiceYou"<<endl; 
              cout<<"\nGoto Menu and take the receipt"<<endl;
              break;
            default:
              cout<<"Invalid Input! Redirecting to Previous Menu \nPlease Wait!"<<endl;
              Sleep(1100);
              system("cls");
              hotels();
            }
              int gotomenu;            
              cout<<"\nPress 1 to redirect main menu:";
              cin>>gotomenu;
              if(gotomenu==1)
               {
                menu();
               }
              else 
               {
                menu();
               }
         }
        else if(choiceHotel == 3)
         {
           cout<<"-------WELCOME TO HOTEL ELEPHANTBAY-------\n"<<endl;
           cout<<"The Garden, food and beverage. Enjoy all you can drink. stay cool and get chilled in the summer sun."<<endl;
           cout<<"Packages offered by ElephantBay:\n"<<endl;
           cout<<"1. Family Pack"<<endl;
           cout<<"\tAmazing offer in this summer just for: Rs.5000.00  for a one day!!! \2"<<endl;

           cout<<"\nPress another key to back or \nEnter package number you want to book: ";
           cin>>packChoice;
            
            switch (packChoice)
            {
            case 1:
              hotelCost=5000.00;
              cout<<"\nYou have successfully booked Single Pack at ElephantBay"<<endl;
              cout<<"\nGoto Menu and take the receipt"<<endl;
              break;

            default:
              cout<<"Invalid Input! Redirecting to Previous Menu \nPlease Wait!"<<endl;
              Sleep(1100);
              system("cls");
              hotels();
            }
              int gotomenu;            
              cout<<"\nPress 1 to redirect main menu:";
              cin>>gotomenu;
              if(gotomenu==1)
               {
                menu();
               }
              else 
               {
                menu();
               }
         }
        else
         {
          hotels();
         }
      }  

};

float Booking::hotelCost;/**/

class Charges : public Booking, Cabs, Customers
{
  public:
   void printBill()
    {
      ofstream outf("receipt.txt");
       {
         outf<< "--------ABC Travel Agency--------"<< endl;
         outf<< "-------------Receipt-------------"<< endl;
         outf<< "_________________________________"<< endl;

         outf<< "Customer ID: " <<Customers::cusID <<endl<< endl;
         outf<< "Description\t\t Total"<<endl; 
         outf<< "Hotel cost:\t\t "<< fixed <<setprecision(2) <<Booking::hotelCost <<endl;
         outf<< "Travel (cab) cost:\t " << fixed <<setprecision(2) <<Cabs::lastcabCost <<endl;

         outf<< "_________________________________"<< endl;
         outf<< "Total Charge:\t\t " << fixed <<setprecision(2) <<Booking::hotelCost+Cabs::lastcabCost << endl;
         outf<< "_________________________________"<< endl;
         outf<< "------------THANK YOU------------"<< endl;
       }
       outf.close();
    }
   void showBill()
    {
      ifstream inf("receipt.txt");
       {
        if(!inf)
         {
           cout<< " File opening error!" << endl;
         }
         while(!(inf.eof()))
          {
            inf.getline(all, 999);
            cout<<all<<endl;
          }
       }
       inf.close();
    }  
};

void menu()
 {
   int mainChoice , inChoice , gotoMenu;

   cout<<"\t     * ABC Travels *\n" << endl;
   cout<<"----------------------Main Menu----------------------"<<endl;
   cout<<"\t _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ "<<endl;
   cout<<"\t|\t\t\t\t\t|" <<endl;
   cout<<"\t|\tCustomer Management -> 1\t|" <<endl;
   cout<<"\t|\tCabs Management     -> 2\t|" <<endl;
   cout<<"\t|\tBookings Management -> 3\t|" <<endl;
   cout<<"\t|\tCharges & Bill      -> 4\t|" <<endl;
   cout<<"\t|\tExit                -> 5\t|" <<endl;
   cout<<"\t|\t\t\t\t\t|" <<endl;
   cout<<"\t|_ _ _ _ _ _ _ _ _ _ _ _ _ _ _  _ _ _ _|" <<endl;

   cout<< "\nEnter Your Choice: ";
   cin>> mainChoice;

   system("cls");
   Customers a2;
   Cabs a3;
   Booking a4;
   Charges a5;

   if(mainChoice==1)
    {
      cout<<"------Customers------\n" <<endl;
      cout<<"1. Enter New Customer" <<endl;
      cout<<"2. See Old Customers" <<endl;
      cout<<"\nEnter Choice: ";
      cin>>inChoice;
      system("cls");
      if(inChoice == 1)
       {
        a2.getDetails();
       }
      else if(inChoice ==2)
       {
        a2.showDetails();
       } 
      else
       {
        cout<<"Invalid Input! Redirecting to Previous Menu \nPlease Wait!" <<endl;
        Sleep(1100);
        system("cls");
        menu();
       } 

       cout<<"\nPress 1 to Redirect main menu: ";
       cin>>gotoMenu;
       system("cls");
       if(gotoMenu == 1)
        {
         menu();
        }
       else
        {
          menu();
        } 
    }
   else if(mainChoice==2)
    {
      a3.cabDetails();
    }    
   else if(mainChoice==3)
    {
      cout<<"--> Book a Luxury Hotel using the system <--" <<endl;
      a4.hotels();
    } 
   else if(mainChoice==4)
    {
      cout<<"--> Get your receipt <--"  <<endl;
      a5.printBill();

      cout<<"Your reeipt is already printed you can get it from file path\n" <<endl;
      cout<<"to display the your receipt in the screen, Enter 1: or Enter another key to back main menu: ";
      cin>>gotoMenu;
      if(gotoMenu==1)
       {
         system("cls");
         a5.showBill();
         cout<<"\nPress 1 to redirect main menu: ";
         cin>>gotoMenu;
         system("cls");
         if(gotoMenu==1)
          {
            menu();
          }
         else
          {
            menu();
          } 
       }
      else 
       {
        system("cls");
        menu();
       } 
    }
  else if(mainChoice==5)
   {
    cout<<"--GOOD-BYE--" <<endl;
    Sleep(999);
    system("cls");
    menu();
   } 
  else   
   {
    cout<<"Invalid Input! Redirecting to Previous Menu \nPlease Wait!" <<endl;
    Sleep(1100);
    system("cls");
    menu();
   }
 }
//******************************MAIN********************************
main()
{
  ManageMenu startObj;
  return 0;
}