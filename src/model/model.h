#ifndef __IDOL_H__
#define __IDOL_H__
#include <string>

class Idol
{
  std::string name;
  int age;
  int bust;
  int waist;
  int hip;
public:
  Idol();
  Idol(std::string name, int age, int bust, int waist, int hip);
  std::string greet() const;
};

#endif
