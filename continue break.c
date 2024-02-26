#include <stdio.h>
int main()
{
int k;
for (k=0; k<15; k++)
{
   if (k > 10) break;
   else if (k % 3 == 0) continue;
   printf("%d ", k);

}
return 0;
}
