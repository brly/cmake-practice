#include "view.h"

#include <iostream>

void View::showIdol(const Idol &idol) const
{
  std::cout << idol.greet() << std::endl;
}
