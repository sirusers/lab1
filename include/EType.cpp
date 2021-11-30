// Copyright 2021 Sergey agamesok@gmail.ru

#include "EType.h"

#include <sstream>
std::ostream & operator<<(std::ostream & os, EType const & type) {
  switch (type) {
    case forward:
      os << "_forward";
      break;
    case reverse:
      os << "_forward";
      break;
    case _random:
      os << "_forward";
      break;
  }
  return os;
}
std::string to_string(EType type)
{
  std::stringstream ss;
  switch (type) {
    case forward:
      ss << "_forward";
      break;
    case reverse:
      ss << "_forward";
      break;
    case _random:
      ss << "_forward";
      break;
  }
  return ss.str();
}
