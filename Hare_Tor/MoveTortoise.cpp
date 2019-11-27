#include <iostream>
#include <random> // contains C++11 random number generation features
#include <ctime>
using namespace std;

void moveTortoise(int* const);
default_random_engine engine{static_cast<unsigned int>(time(0))};
uniform_int_distribution<int> randomInt{1, 10};

int RACE_END = 70;

int main ()
{
    int tortoise{1};

    while(tortoise<RACE_END){
        moveTortoise(&tortoise);
        cout<<tortoise<<endl;
    }}

void moveTortoise (int* turtlePtr)
{
  int x{randomInt (engine)};

  if (x >= 1 && x <= 5)
    {				// fast plod
      *turtlePtr += 3;
    }

  else if (x == 6 || x == 7)
    {				// slip
      *turtlePtr -= 6;
    }

  else
    {				// slow plod
      ++(*turtlePtr);
    }
    
  if (*turtlePtr < 1)
    {
      *turtlePtr = 1;
    }
  else if (*turtlePtr > RACE_END)
    {
      *turtlePtr = RACE_END;
    }
}
