#include <stdio.h> //��� �ҷ����� 

int main(){ //�Լ� ���� 

    int x,y; //��ǥ�� �޾ƿ� ������ ���� �� �� ���� 

    scanf("%d %d",&x,&y); //�Է� �޾ƿ� -> scanf(����Ÿ�� ����Ÿ��, �ּҰ�1 �ּҰ�2 ) 
    
	if(x>0 && y>0) //1��и� ���� 
        printf("1");
    else if(x<0 && y>0) //2��и� ���� 
        printf("2");
    else if(x<0 && y<0) //3��и� ���� 
        printf("3");
    else if(x>0 && y<0) //4��и� ���� 
        printf("4");
        
    return 0; 
}
