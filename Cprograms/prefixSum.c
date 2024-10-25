#include<stdio.h>

int main(){
    int arr[]={5,10,15,20,25};
    int len =sizeof(arr)/sizeof(int);
    int pre[len+1];
    pre[0]=0;
    int sum=0;
    for(int i=0;i<len;i++){
        sum+=arr[i];
        pre[i+1]=sum;
    }
    for(int i=0;i<len+1;i++){
        printf("%d ",pre[i]);
    }
}