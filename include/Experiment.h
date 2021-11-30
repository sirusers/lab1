// Copyright 2021 Sergey agamesok@gmail.ru

#ifndef TEMPLATE_EXPERIMENT_H
#define TEMPLATE_EXPERIMENT_H
#include <chrono>
#include <ostream>
#include <sstream>

#include "Experiment.h"
#include "EType.h"

class Experiment
{
 public:
  int id;
  int64_t size;
  int time;
  EType type;
  Experiment(int id, EType type, int64_t size);
  char* initArray();
  double run();
  void _forward(char* arr, char& k);
  void reverse(char* arr, char& k);
  void random(char* arr, char& k);
  void print(std::ostream& os);
};

#endif  // TEMPLATE_EXPERIMENT_H
