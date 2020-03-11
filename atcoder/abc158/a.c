#include <stdio.h>

int main(){
	char sa;
	char sb;
	char sc;
	scanf("%c", &sa);
	scanf("%c", &sb);
	scanf("%c", &sc);
	if(sa == sb && sb == sc){
		printf("No\n");
	}
	else{
		printf("Yes\n");
	}
  	return 0;
}