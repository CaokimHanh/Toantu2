#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int mark1;
	int mark2;
	float avgGPA;
	
	printf("Nhap diem dung gio: ");
	scanf("%d", &mark1);
	
	printf("Nhap diem chat luong: ");
	scanf("%d", &mark2);
	
	avgGPA =(float)(mark1 + mark2)/2;
	printf("Diem tong hop: %.1f", avgGPA);
	
	return 0;
}
