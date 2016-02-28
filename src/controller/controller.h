#ifndef __CONTROLLER_H__
#define __CONTROLLER_H__

#include "model/model.h"
#include "view/view.h"
#include <vector>

class Controller
{
  View view;
  std::vector<Idol> idols;
public:
  Controller();
  Controller(const std::vector<Idol> &idols);
  void receive(int index) const;
  int countIdol() const;
};

#endif
