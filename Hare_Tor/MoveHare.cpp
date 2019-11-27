#include <iostream>
#include <random>		// contains C++11 random number generation features
#include <ctime>
using namespace std;

void moveHare (int *);

default_random_engine engine{static_cast < unsigned int >(time (0))};
uniform_int_distribution < int >randomInt{1, 10};

int RACE_END = 70;

int main ()
{
  int rabbitPtr{1};

  while (rabbitPtr < RACE_END)
    {
      moveHare (&rabbitPtr);
      cout << rabbitPtr << endl;
    }
}

void moveHare (int * rabbitPtr)
{
  int y{randomInt (engine)};
  
  if (y == 3 || y == 4)
    {				// big hop
      *rabbitPtr += 9;
    }
  else if (y == 5)
    {				// big slip
      *rabbitPtr -= 12;
    }
  else if (y >= 6 && y <= 8)
    {				// small hop
      ++(*rabbitPtr);
    }
  else if (y > 8)
    {				// small slip
      *rabbitPtr -= 2;
    }
  if (*rabbitPtr < 1)
    {
      *rabbitPtr = 1;
    }
  else if (*rabbitPtr > RACE_END)
    {
      *rabbitPtr = RACE_END;
    }
}

// display
