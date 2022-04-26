#include "node.h"
#include "parser.hpp"
bool cond::apply(int number) {
  bool left = false, right = false;
  switch (this->relation_type) {
  case GE: {
    return number >= this->number;
  }
  case E: {
    return number == this->number;
  }

  case LT: {

    return number < this->number;
  }
  case GT: {

    return number > this->number;
  }
  case LE: {
    return number <= this->number;
  }
  case AND: {
    if (this->left)
      left = this->left->apply(number);
    if (this->right)
      right = this->right->apply(number);
    return left and right;
  }
  case OR: {
    if (this->left)
      left = this->left->apply(number);
    if (this->right)
      right = this->right->apply(number);
    return left or right;
  }
  }
  return 0;
}
bool cond::apply(float number) {
  bool left = false, right = false;
  switch (this->relation_type) {
  case GE: {

    return number >= this->number;
  }
  case E: {
    return number == this->number;
  }

  case LT: {

    return number < this->number;
  }
  case GT: {
    return number > this->number;
  }
  case LE: {
    return number <= this->number;
  }
  case AND: {
    if (this->left)
      left = this->left->apply(number);
    if (this->right)
      right = this->right->apply(number);
    return left and right;
  }
  case OR: {
    if (this->left)
      left = this->left->apply(number);
    if (this->right)
      right = this->right->apply(number);
    return left or right;
  }
  }
  return 0;
}
