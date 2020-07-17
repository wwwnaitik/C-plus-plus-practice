#include <IOSTREAM>
using namespace std;

void star()
{
  int i = 1;
  int j;

  for (i = 10; i > 0; i--)
  {
    for (j = 1; j <= i; j++)
    {
      cout << "*";
    }
    cout << "\n";
  }
}

void pyramid()
{
  int m;
  int n;

  for (m = 0; m < 10; m++)
  {
    for (n = 0; n <= m; n++)
    {
      cout << "*";
    }
    cout << "\n";
  }
}

void largePyramid()
{
  int i;
  int j;
  int numOfRows;
  int whiteSpaceInStar;
  int starPerRow;
  int maxStar;
  int starStartPos;
  int starEndPos;

  numOfRows = 23;
  maxStar = numOfRows * 2;

  for (i = 0; i < numOfRows; i++)
  {
    starPerRow = i + (i + 1);

    whiteSpaceInStar = (maxStar - starPerRow) / 2;

    starStartPos = (whiteSpaceInStar + 1);

    starEndPos = (whiteSpaceInStar + starPerRow);

    for (j = 0; j < maxStar; j++)
    {
      if (j >= starStartPos && j <= starEndPos)
      {
        cout << "*";
      }
      else
      {
        cout << " ";
      }
    }
    cout << " \n";
  }
}

void smallpyramid()
{
  int i = 1;
  int j;

  for (i = 23; i >= 0; i--)
  {
    for (j = 0; j <= i; j++)
    {
      cout << "*";
    }
    cout << "\n";
  }
}

void reversepyramid()


    // Main program

    void main()
{
  star();
  pyramid();
  largePyramid();
  smallpyramid();
  reversepyramid();
}
