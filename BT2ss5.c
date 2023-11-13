#include<stdio.h>
int main(){
	int number;
	printf("nhap doanh thu ban hang : ");
	scanf("%d",&number);
	int sum = number*5/100;
	int sum1 = number*10/100; 
	int sum2 = number*20/100;  
	if(number<=100){
	    printf("hoa hong dai ly nhan duoc : %d",sum);
    }else if(100<number&&number<=300){
    	 printf("hoa hong dai ly nhan duoc : %d",sum1);
	}else{
		 printf("hoa hong dai ly nhan duoc : %d",sum2);
	} 
	 
}
