
#include <stdlib.h>
int main()
{
  int panjang, lebar, luas;
  printf("\n""Program Menghitung Luas Segiempat Bahasa C\n"
         "\n\n");
  printf("Panjang: ");scanf("%d",&panjang);
  printf("\n");
  printf("Lebar: ");scanf("%d",&lebar);  
  luas = panjang * lebar;  
  printf("\nLuas = %d * %d = %d\n\n",panjang, lebar, luas);
  
  return(0);
}
