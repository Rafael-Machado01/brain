// Leia de 1 a 100 e números que sejam mutiplios de 3 imprima "Fizz" - para multiplos de 5 "Buzz" -  e para os dois "Fizz Buzz"
#include <iostream>
using namespace std;

int main()
{
  for (int i = 1; i < 100; i++)
  {
    if (i % 3 == 0 and i % 5 == 0)
    {
      cout << "Fizz Buzz" << endl;
    }
    else if (i % 3 == 0)
    {
      cout << "Fizz" << endl;
    }
    else if (i % 5 == 0)
    {
      cout << "Buzz" << endl;
    }
    else
    {
      cout << i << endl;
    }
  }
}