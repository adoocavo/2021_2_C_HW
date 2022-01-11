#include<stdio.h>

int main(void)
{
	int s;
	printf("성적을 입력하세요: ");
	scanf("%d", &s);
	
	if (s>=80){
		if(s>=90){
			printf("A");
			}
		
		else 
			printf("B");
	} 
	
	else {
	
		if (s>=60){
			if(s>=70){
				printf("C");
			}
			else 
				printf("D");	
			} 
	
		else 
			printf("F");
}

}
