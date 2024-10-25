#include<stdio.h>
#define VL 179;
#define HL 196;
#define TL 218;
#define TR 191;
#define BL 192;
#define BR 217;
#define PLUS 197;

int main(){
  int size;
  printf("Enter the Size");
  scanf("%d",&size);
  for(int row=0;row<size;row++){
	  for(int col=0;col<size;col++){
	    if(row==0 || row == size-1)
        if(row==0 && col ==0)printf("%c",TL);
		    printf("%c",HL);
	    else
		    if(col==0 || col==size-1 )printf("- ");
		    else printf("  ");
	
	}
  printf("\n");
  }
  return 0;
}
