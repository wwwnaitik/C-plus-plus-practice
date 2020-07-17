#include <IOSTREAM>
using namespace std;

// Main program
void main()
{
  int num = 2;
  int i;

  cout << "please enter a number";
  cin >> num;

  for (i = 1; i <= 10; i++)
  {
    cout << num * i;

    cout << ",";
  }
}