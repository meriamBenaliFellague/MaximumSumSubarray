#include<stdio.h>

int ReadSize();
int ReadInput();

int main(){
	int length , number , sum = 0 , max;
	length = ReadSize();
	int t[length] , s[length];
	for(int i = 0 ; i < length ; i++){
		number = ReadInput();
		t[i] = number;
	}
	max = t[0];int count;
	if(length == 1){
		printf("%d",t[0]);
	}else{
		for(int i=0; i<length ; i++){
		sum = 0;
			for(int j = i+1; j < length ; j++){int sum2 = 0 , sum3;
				for(int l = i; l <= j ; l++){
					sum2 = sum2 + t[l];
				}
				
				if(max < sum2){
					max = sum2;
					int p = 0;
				    for(int k = i ; k <= j ; k++){
				    	s[p] = t[k];
				    	p++;
				    	count = j;
					}
					
				} 
			
		   }
		}
		for(int i = 0; i <=count ; i++){
			printf("%d" , s[i]);
		}
		printf("\n%d" , max);
	}
	
}


int ReadSize(){
	int size;
	printf("enter length of th array: ");
	scanf("%d" , &size);
	return size;
}

int ReadInput(){
	int input;
	printf("enter number: ");
	scanf("%d" , &input);
	return input;
}
