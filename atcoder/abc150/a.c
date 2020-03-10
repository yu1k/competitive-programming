#include <stdio.h>
 
int main(){
	int k;
	int x;
    int total;
	scanf("%d", &k);
	scanf("%d", &x);
	total = k * 500;
	if(x <= total){
		printf("Yes""\n");
	}
  	else{
      	printf("No""\n");
    }
	return 0;
}