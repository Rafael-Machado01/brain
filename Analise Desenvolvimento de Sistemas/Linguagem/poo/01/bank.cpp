#include <iostream>
using namespace std;

#include "./bank.h"

int main() {
  Bank test;
  test.read();
  test.transition(200,true);
   test.transition(540,true);
    test.transition(2000,false);
    test.summary();
}