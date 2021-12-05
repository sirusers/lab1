// Copyright 2021 Sergey agamesok@gmail.ru

#ifndef TEMPLATE_INVESTIGATION_H
#define TEMPLATE_INVESTIGATION_H
#include <iostream>
#include <vector>
#include <random>
#include "Experiment.h"
using std::string;
using std::vector;
struct Investigation {
  EType type;
  std::vector<Experiment> experiments;
  Investigation(EType type, std::vector<int64_t>& sizes);

 public:
  void print(std::ostream& os);
};
#endif  // TEMPLATE_INVESTIGATION_H
