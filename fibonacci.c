#include<stdio.h>

//Print the first 10 issues of the fibonacci series.
//11235813...

int main(){
	
	int first_term=1;
	int second_term=1;
	int i;
	
	int temp;
	
	printf("%d\n%d\n",first_term,second_term);
	
	for(i=0;i<10;i++){
		
		temp=first_term;
		
		second_term+=first_term;
		
		first_term=temp;
		
		printf("%d\n",second_term);
		
		
	}
	
	return 0;
	
}
