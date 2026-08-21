#include <stdio.h>
#include <string.h>
#include <math.h>


void decimal2binary();
void binary2decimal();
void decimal2octal();
void octal2decimal();
void decimal2hex();
void hex2decimal();
void binary2hex();
void hex2binary();

//----------------------------------------------------------------------
int main(){
	
	int choice = 0;
	printf("\n***Number Base Convertor***\n");
	printf("\nPlease select an option: \n");
	printf("1. Decimal to Binary\n2. Binary to Decimal\n3. Decimal to Octal\n4. Octal to Decimal\n5. Decimal to Hexadecimal\n6. Hexadecimal to Decimal\n7. Binary to Hexadecimal\n8. Hexadecimal to Decimal\n");
	scanf("%d", &choice);
	getchar();
	
	switch(choice){
		case 1:
			decimal2binary();
			break;
		case 2:
			binary2decimal();
			break;
		case 3:
			decimal2octal();
			break;
		case 4:
			octal2decimal();
			break;
		case 5:
			decimal2hex();
			break;
		case 6:
			hex2decimal();
			break;
		case 7:
			binary2hex();
			break;
		case 8:
			hex2binary();
			break;
			
		default:
			printf("Invalid input!");
			break;
	
	}
	

	return 0;
}
//----------------------------------------------------------------------
void decimal2binary(){
	
	int decimal = 0;
	char binary[33] = "";
	int i = 0;
	
	printf("Enter the decimal number you wish to convert to binary: ");
	scanf("%d", &decimal);
	
	while(decimal>0){
		binary[i] = decimal % 2;
		decimal /= 2;
		i++;
	}
	
	printf("Your number converted to binary is:\n");
	
	while(i>0){
		
		i--;
		printf("%d",binary[i]);
		
	}
}
//----------------------------------------------------------------------
void binary2decimal(){
	
	int decimal = 0;
	int power = 0;
	char binary[32] = "";
	printf("Enter the binary number you wish to convert to decimal: ");
	scanf("%31s", binary);
	

	
	int i = strlen(binary) -1;
	
	while(i >= 0){
		decimal += (binary[i] - '0') * (1<<power);
		i--;
		power++;
	}
	printf("\nbinary to decimal is: %d",decimal);
}
//----------------------------------------------------------------------
void decimal2octal(){
	int decimal = 0;
	char octal[33] = "";
	int i = 0;
	
	printf("Enter the decimal number you wish to convert to octal: ");
	scanf("%d", &decimal);
	
	while(decimal>0){
		octal[i] = decimal % 8;
		decimal /= 8;
		i++;
	}
	
	printf("Your number converted to octal is:\n");
	
	while(i>0){
		
		i--;
		printf("%d",octal[i]);
		
	}
}
//----------------------------------------------------------------------
void octal2decimal(){
	int decimal = 0;
	int power = 0;
	char octal[32] = "";
	printf("Enter the octal number you wish to convert to decimal: ");
	scanf("%31s", octal);
	

	
	int i = strlen(octal) -1;
	
	while(i >= 0){
		decimal += (octal[i] - '0') * (pow(8,power));
		i--;
		power++;
	}
	printf("\nYour number converted to decimal is: %d",decimal);
}
//----------------------------------------------------------------------
void decimal2hex(){
	
	int num = 0;
	printf("Enter the decimal number you wish to convert to hexadecimal: ");
	scanf("%d", &num);
	
	printf("Your number converted to hexadecimal is: %X",num);
}
//----------------------------------------------------------------------	

void hex2decimal(){
	
	int hex = 0;
	printf("Enter the hexadecimal number you wish to convert to decimal: ");
	scanf("%x", &hex);
	
	printf("Your number converted to decimal is: %d", hex);
	
	
}
//----------------------------------------------------------------------

void binary2hex(){
	
	int hex = 0;
	int power = 0;
	char binary[32] = "";
	printf("Enter the binary number you wish to convert to hexadecimal: ");
	scanf("%31s", binary);
	

	
	int i = strlen(binary) -1;
	
	while(i >= 0){
		hex += (binary[i] - '0') * (1<<power);
		i--;
		power++;
	}
	printf("\nYour number converted to hexadecimal is: %X",hex);
}
//----------------------------------------------------------------------
void hex2binary(){
	
	int hex = 0;
	char binary[33] = "";
	int i = 0;
	
	printf("Enter the hexadecimal number you wish to convert to binary: ");
	scanf("%x", &hex);
	
	while(hex>0){
		binary[i] = hex % 2;
		hex /= 2;
		i++;
	}
	
	printf("Your number converted to binary is:\n");
	
	while(i>0){
		
		i--;
		printf("%d",binary[i]);
		
	}
}
