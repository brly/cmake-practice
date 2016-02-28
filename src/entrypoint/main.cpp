#include "controller/controller.h"
#include <iostream>

std::vector<Idol> createIdols()
{
  std::vector<Idol> r = {
    Idol("Haruka Amami", 17, 83, 56, 82),
    Idol("Miki Hosii", 16, 72, 55, 78),
    Idol("Kisaragi Chihaya", 15, 86, 55, 83)
  };

  return r;
}

int main()
{
  using namespace std;

  Controller controller(createIdols());
  string input;

  while (cin >> input)
  {
    if (input == "quit" ||
        input == "q")
    {
      break;
    }
    int index = atoi(input.c_str());
    controller.receive(index);
  }

  return 0;
}
