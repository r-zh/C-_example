#include <iostream>

using namespace std;
#include <iomanip>

void printCurrentPositions(const int *const, const int *const);

int main ()
{
    int snapperPtr=10;
    int bunnyPtr=10;
    printCurrentPositions (&snapperPtr,&bunnyPtr);
    
    snapperPtr=21;
    bunnyPtr=10;
    printCurrentPositions (&snapperPtr,&bunnyPtr);
    
    snapperPtr=10;
    bunnyPtr=22;
    printCurrentPositions (&snapperPtr,&bunnyPtr);
}

void printCurrentPositions (const int *const snapperPtr, const int *const bunnyPtr)
{
  if (*bunnyPtr == *snapperPtr)
    {
      cout << setw (*bunnyPtr) << "OUCH!!!" << '\a';	// \a plays alert tone
// when tortoise bites hare
    }
  else if (*bunnyPtr < *snapperPtr)
    {
      cout << setw (*bunnyPtr) << 'H'<< setw (*snapperPtr - *bunnyPtr) << 'T';
    }
  else
    {
      cout << setw (*snapperPtr) << 'T'<< setw (*bunnyPtr - *snapperPtr) << 'H';
    }
  cout << '\n';
}
