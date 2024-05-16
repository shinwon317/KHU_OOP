#include <iostream>
#include "store.h"
using namespace std;

int main() 
{
   store A[5], * B;
   cout << " " << sizeof(A) << endl;
   for (int i = 0; i < 5; i++)
   {
      A[i] = store(i + 2, 3, 4, 1000 + 100 * i, 500, 600);
   }
   cout << A[2].apple.many << " ";
   cout << A[2].apple.price << endl;
   cout << (A + 4)->apple.many << " " << (A + 4)->apple.price << endl;
   B = A + 2;
   cout << B[0].apple.many << " ";
   cout << B[0].apple.price << endl;
   cout << (B+2)->apple.many << " " << ...
