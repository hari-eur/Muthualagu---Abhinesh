1.HALF PYRAMID
#include <stdio.h>
int main() {
   int i, j;
   for (i=1; i<=7; ++i) {
      for (j=1; j <=i; ++j) {
         printf("* ");
      }
      printf("\n");
   }
   return 0;
}


2.FULL PYRAMID
#include <stdio.h>
int main() {
   int i, space, k = 0;
   for (i = 1; i <= 7; ++i) {
      for (space = 1; space <= 7 - i; ++space) {
         printf("  ");
      }
      while (k != 2 * i - 1) {
         printf("* ");
         ++k;
      }
      printf("\n");
   }
   return 0;
}


3.INVERTED FULL PYRAMID
#include <stdio.h>
int main() {
   int i, j, space;
   for (i = 7; i >= 1; --i) {
      for (space = 0; space < 7 - i; ++space)
         printf("  ");
      for (j = i; j <= 2 * i - 1; ++j)
         printf("* ");
      for (j = 0; j < i - 1; ++j)
         printf("* ");
      printf("\n");
   }
   return 0;
}
