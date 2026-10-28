#include<stdio.h>
float somar_2n(float n1, float n2){
	return n1+n2;
}
void saudacao2(int hora){
	if(hora < 12)
	   printf("\nBom dia buffalo, seja bem vindo!");
	else if(hora < 18)
	   printf("\nBoa tarde buffalo, seja bem vindo!");
	else
	   printf("\nBoa noite buffalo, seja bem vindo!");
}
int main(){
	printf("%f", somar_2n(7,8));

	saudacao2(8);
	printf("\nFIM");
}