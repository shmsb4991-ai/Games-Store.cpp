#include <iostream>
#include <string>
int main ()
{
   std :: string name;
   std ::cout <<"Enter your name: \n";
   getline (std :: cin,name);
   int age;
   std :: cout <<"Please Enter your Age: \n ";
   if (!( std :: cin >>age))
   {
       std :: cout <<"Error! please Enter Numbers only! \n";
       return 1;
   }
   int games;
   std :: cout <<"Enter your desired quantity: \n";
   std :: cin >> games;
   double price = 350.50;
   double total = price * games;
   if (games > 100)
   {
       std :: cout <<"The remaining Quantity = 100! \n";
       return 1;
   }
   if (games >= 4)
   {
       double total = (games * price) * 0.85;
       std :: cout <<"Congratulations! You Got 15%. Discount! \n";
       std :: cout <<"The price is " << total << std :: endl;
   }
   else 
   {
       double total = games * price;
       std :: cout <<"The total price is " << total << std :: endl; 
   }
   int cash = 15000;
    std :: cout <<"Your remaining Cash is " << cash << " Please spend with Caution \n";
   return 0;
}

