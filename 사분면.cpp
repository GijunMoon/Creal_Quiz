#include <stdio.h> //헤더 불러오기 

int main(){ //함수 선언 

    int x,y; //좌표를 받아올 정수형 변수 두 개 선언 

    scanf("%d %d",&x,&y); //입력 받아옴 -> scanf(변수타입 변수타입, 주소값1 주소값2 ) 
    
	if(x>0 && y>0) //1사분면 조건 
        printf("1");
    else if(x<0 && y>0) //2사분면 조건 
        printf("2");
    else if(x<0 && y<0) //3사분면 조건 
        printf("3");
    else if(x>0 && y<0) //4사분면 조건 
        printf("4");
        
    return 0; 
}
