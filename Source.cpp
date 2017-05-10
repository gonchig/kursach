#include <iostream>
#include "Defender.hpp"

void main()
{ 
	char* image = "letme1nSYStem!"; 
	char input[20];
	printf("Enter: ");
	gets_s(input,20);
	if(strcmp(input,image))
		printf("Wrong!");
	else
		printf("Accepted!");
		
}


