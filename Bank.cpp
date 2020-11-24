#include <string>

#include "Bank.hpp"

/************************************************
** Member function definitions
************************************************/
// PLEASE ADD IMPLEMENTATIONS OF ALL FUNCTION MEMBERS OF CLASS BANK

Bank::Bank(const std::string &name, const double &amount_salary,
           const double &amount_starting)
  {
    name_ = name;
    amount_starting_ = amount_starting;
    amount_salary_ = amount_salary;
    amount_left_ = 0.0;
  }
