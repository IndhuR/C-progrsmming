#include <stdio.h>
#include <stdlib.h>
void swap(int *p,int *q)
{
    int temp; 
    temp=*p;
    *p=*q;
    *q=temp;
}
int main()
{
    int num, *arr, i;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }
   for(i=0;i<num/2;i++)
   swap(arr+i,arr+(num-1)-i);


    for(i = 0; i < num; i++)
        printf("%d ", *(arr + i));
    return 0;
}

