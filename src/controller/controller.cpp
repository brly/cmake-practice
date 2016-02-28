#include "controller/controller.h"
#include <cstdlib>
#include <algorithm>
#include <cassert>

namespace {

template <class T>
T clamp(const T& min_, const T& max_, const T& value)
{
  return std::max(min_, std::min(value, max_));
}

};

Controller::Controller()
{
  Idol idol;
  idols.push_back(idol);
}

Controller::Controller(const std::vector<Idol> &idols_) : idols(idols_) {}

void Controller::receive(int index) const
{
  assert(index == clamp(0, countIdol() - 1, index));
  view.showIdol(idols[index]);
}

int Controller::countIdol() const
{
  return static_cast<int>(idols.size());
}
