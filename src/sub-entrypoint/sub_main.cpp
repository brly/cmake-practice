#include "model/model.h"
#include <cstdlib>
#include <ctime>
#include <cstdio>

int main()
{
  Idol idol;
  srand((unsigned)time(0));
  printf("%s: %d\n", idol.greet().c_str(), rand());
  return 0;
}
