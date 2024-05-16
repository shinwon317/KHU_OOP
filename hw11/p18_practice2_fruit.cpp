#include "fruit.h"
#include <iostream>

using namespace std;

float fruit::show() {
   return price * many;
}

void fruit::show_all() {
   cout << "price = " << price << "  " << "many = " << many << endl;
}
