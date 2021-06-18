#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
int n=0, max=0, min=100;
int score[5]={ 0 };
char m[][10] = { "90점 이상", "80점 대", "70점 대", "60점 대", "60점 미만" };
printf("점수 입력 : ");
while(1){    
 scanf("%d", &n);  
 if (n < 0) { break; }   
 switch (n / 10) {       
 case 10: case 9: score[0]++; break;   
 case 8: score[1]++; break;           
 case 7: score[2]++; break;      
 case 6: score[3]++; break;     
 default: score[4]++; break;          
 }
for (int i = 0; i < sizeof(score) / sizeof(int); i++) { 
printf("%s : ", m[i]); 
 for (int j = 0; j < score[i]; j++) { 
 printf("*");    //학생수만큼 '*' 출력 (이거 숫자 출력으로 바꿔)
 }
 printf("\n");  
}
