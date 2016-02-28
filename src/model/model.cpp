#include "model.h"
#include <sstream>

Idol::Idol()
: name("No name"), age(18), bust(80), waist(60), hip(80) {}

Idol::Idol(std::string name, int age, int bust, int waist, int hip)
: name(name), age(age), bust(bust), waist(waist), hip(hip) {}

std::string Idol::greet() const
{
  std::stringstream ss;
  ss << "My name is " << name << std::endl;
  return ss.str();
}
