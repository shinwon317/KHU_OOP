#pragma once
#include "fruit.h"
class store {
public:
    store() {};
    store(int a, int b, int c, int d, float e, float f) {
        apple = fruit(a, d);
        pear = fruit(b, e);
        peach = fruit(c, f);
    }
    fruit apple, pear, peach;
    float total();
};
