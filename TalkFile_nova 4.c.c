#include <stdio.h>
//인자 두 개 받아서 a^b승 계산하기
//b값 차감시키는 꼴로 계산
int sum (int k, int i) {
int s;
if (i>0) {
    
    return s = k * sum(k, i-1);
} 

}

int main(void) {
int k;
int i;
printf("수를 두 개 입력하세요: ");
scanf("%d, %d", &k, &i);
printf("%d입니다.", sum(k, i));
return 0;
}