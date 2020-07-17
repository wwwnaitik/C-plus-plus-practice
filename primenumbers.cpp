#include <IOSTREAM>
using namespace std;

// Main program

void main()
{
   int num, i;
   float m;
   bool flag = true;

   cout << "please enter a number:";
   cin >> num;
   m = num / 2;

   for (i = 2; i < m; i++)
   {
      if (num % i == 0)
      {
         flag = false;
         break;
      }
   }

   if (flag == false)
   {
      cout << "number is composite ";
   }
   else
   {
      cout << "number is Prime ";
   }
}
