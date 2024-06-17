#include <stdio.h>

int main() {
	int age;
	float time;
	char name[20];
	printf("Enter nickname : ");
	scanf("%s", &name);
	printf("Enter age : ");
	scanf("%d", &age);
	printf("Enter the time you woke up today : ");
	scanf("%f",&time);
	
	printf("\nYour nickname is : %s\n",name);
	printf("Your age is : %d\n",age);
	printf("Your woke up at : %.2f",time);
	return 0;
}

