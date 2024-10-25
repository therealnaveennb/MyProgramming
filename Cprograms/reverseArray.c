#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }

    int j=0;
    int len =num;
    num--;
    while(j!=num){
        int temp=arr[j];
        arr[j]=arr[num];
        arr[num]=temp;
        j++;num--;
    }
    
    num=len;
    for(i = 0; i < num; i++)
        printf("%d ", *(arr + i));
    return 0;
}
