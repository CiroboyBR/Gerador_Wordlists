#include <stdio.h>
#include <stdlib.h>
#include <string.h>

FILE *resul;

int main()
{
  int aa, mm, dd;
  char l1, l2;

  resul = fopen("datas.txt", "w");

  for (aa = 1990; aa < 1991; aa++)
    for (mm = 1; mm < 13; mm ++)
      for ( dd = 1; dd < 32; dd++)
      {
          l1 = 'a';
          while (l1 <= 'z') {
            l2 = 'a';
            while (l2 <= 'z')
            {
        fprintf(resul, "%02d%02d%02d%c%c\n", aa, mm, dd, l1, l2);// 19900101aa..zz
        fprintf(resul, "%02d%02d%02d%c%c\n", dd, mm, aa, l1, l2);// 01011990aa..zz

        fprintf(resul, "%02d-%02d-%02d%c%c\n", aa, mm, dd, l1, l2);// 1990-01-01aa..zz
        fprintf(resul, "%02d-%02d-%02d%c%c\n", dd, mm, aa, l1, l2);// 01-01-1990aa..zz

        fprintf(resul, "%02d/%02d/%02d%c%c\n", aa, mm, dd, l1, l2);// 1990/01/01aa..zz
        fprintf(resul, "%02d/%02d/%02d%c%c\n", dd, mm, aa, l1, l2);// 01/01/1990aa..zz

        fprintf(resul, "%02d\\%02d\\%02d%c%c\n", aa, mm, dd, l1, l2);// 1990\01\01aa..zz
        fprintf(resul, "%02d\\%02d\\%02d%c%c\n", dd, mm, aa, l1, l2); // 01\01\1990aa..zz

                l2++;
            }
            l1++;
          }
      }

  fclose(resul);
  return 0;
}
