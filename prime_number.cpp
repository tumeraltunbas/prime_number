//The numbers that are divisible by 1 and itself are prime numbers//
#include<stdio.h>
int primenumber(int number){
int i;
for(i=2;i<number;i++){
	if(number%i==0){
		return 0;
	}
}
return 1;
}
int main () {
	int n;
	printf("Please enter the number you want to know if it is prime: ");
	scanf("%d",&n);
	if(primenumber(n)==0){
	printf("The number you enter is not a prime number.");
	}
	else {
	printf("The number you entered is the prime number.");
	}
	return 0;
}
