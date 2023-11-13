#include <stdio.h>
int main(){
	float d,e;
	printf("nhap so phut:");
	scanf("%f",&d);
	if(d<=50){
		e=d*600;
	}else if(d>50&&d<=150){
		e=(d-50)*400+600*50;
	}else if(d>150&&d<=200){
		e=(d-150)*200+600*50+400*100;
	}else{
		e=(d-200)*100+600*50+400*100+200*200; 
	} 
	printf("so tien phai tra la:%.2f",e+25000);
}
