/*The code adds numbers from 1 to n */

#include<stdio.h>

int main(){
	int number;
	int sum;
	int i;
	printf("From one to which number do you want to add(The number is included):");
	scanf("%d",&number);
	
	for (i=0; 1; i++){
		sum=sum+number;
		--number;
		
		if(number==0){
			break;
		}
	}
	printf("The sum: %d", sum);
	return 0;
}
