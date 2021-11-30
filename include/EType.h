// Copyright 2021 Sergey agamesok@gmail.ru

#ifndef TEMPLATE_ETYPE_H
#define TEMPLATE_ETYPE_H
#include <string>
enum EType
{
  forward,
  reverse, _random };
std::string to_string(EType type);
#endif  // TEMPLATE_ETYPE_H
