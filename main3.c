#include <stdio.h>
#include <stdlib.h>
void BubbleSort(int*const ,int const);

int main()
{
    int NumBer[10]={5,3,4,2,1,6,8,9,10,7};
    int a=0;
    
    
    printf("排序前:");
    
     for(a = 0; a < 10; a++ ) {
        printf("%3d", NumBer[a]);
    }
   
    BubbleSort(NumBer,10);
   
    printf("\n\n排序後:");
    for(a = 0; a < 10; a++ ) {
        printf("%3d", NumBer[a]);
    }
    
    printf("\n\n");
  system("PAUSE");	
  return 0;
}
