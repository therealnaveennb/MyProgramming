#include<stdio.h>

int main(){
    int N, P;
    printf("Enter the Number : ");
    scanf("%d",&N);
    printf("Enter the Number of multiples: ");
    scanf("%d",&P);
    int sum=0;
    int temp=P;
    while(P){
        sum+=P*N;
        P--;
    }
    int result = sum/temp;
    printf("%d %d |",sum,temp);
    printf(" %d ",result);
}