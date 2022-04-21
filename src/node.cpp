#include "node.h"
#include "parser.hpp"
bool cond::apply(int number)
{
    bool left , right;
    switch(this->relation_type)
    {
        case GE:
            return number >=this->number;
        case E:
            return number == this->number;
            
        case LT:
            return number<this->number;
        case GT:
            return number> this->number;
        case LE:
            return number <= this->number;
        case AND:
            left=this->left->apply(number);
            right=this->right->apply(number);
            return left and right;
        case OR:
            left=this->left->apply(number);
            right=this->right->apply(number);
            return left or right;
    }

}
bool cond::apply(float number)
{
    bool left , right;
    switch(this->relation_type)
    {
        case GE:
            return number >=this->number;
        case E:
            return number == this->number;
            
        case LT:
            return number<this->number;
        case GT:
            return number> this->number;
        case LE:
            return number <= this->number;
        case AND:
            left=this->left->apply(number);
            right=this->right->apply(number);
            return left and right;
        case OR:
            left=this->left->apply(number);
            right=this->right->apply(number);
            return left or right;
    }

}
