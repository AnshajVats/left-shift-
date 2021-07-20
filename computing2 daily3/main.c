/*
Author : ANSHAJ VATS
DATE : 9/22/2020

Effort: 3 hours

Purpose: to practice the bit wise operator.


*/




#include<stdio.h>


void set_flag(unsigned int flag_holder[], int flag_position);
void unset_flag(unsigned int flag_holder[], int flag_position);
int check_flag(unsigned int flag_holder[], int flag_position);
void display_32_flags(unsigned int flag_holder);
void diaplay_flags(unsigned int flag_holder[], int size);
int main(int argc, char* argv[])
{
	unsigned int flag_holder[5] = { 0 };

	set_flag(flag_holder, 3);
	set_flag(flag_holder, 16);
	set_flag(flag_holder, 31);
	set_flag(flag_holder, 87);

	diaplay_flags(flag_holder,5);

	printf("\n\n");

	unset_flag(flag_holder, 31);
	unset_flag(flag_holder, 3);
	set_flag(flag_holder, 99);
	set_flag(flag_holder, 100);
	
	
	diaplay_flags(flag_holder, 5);

	return 0 ;
}


void set_flag( unsigned int flag_holder[], int flag_position) {
	
	int bit = 32;
	flag_holder[flag_position/bit]= flag_holder[flag_position/bit] | (1 << (flag_position%bit));
	

}

int check_flag(unsigned int flag_holder[], int flag_position) {


	int bit = 32;
	
		if ((flag_holder[flag_position/bit] & (1 << (flag_position%bit))) == 0)
		{
			return 0;
		}
		else {
			return 1;
		}
	
}

void display_32_flags(unsigned int flag_holder) {
	
	int i;
	

		for (i = 0; i <= 31; ++i)
		{


			printf("%d", check_flag(&flag_holder, i));


			
			if (i % 4 == 3)
			{
				printf(" ");
			}
			
		}

		printf("\n");
	

}

void unset_flag(unsigned int flag_holder[], int flag_position) {
	int bit=32;
	flag_holder[flag_position/bit] = flag_holder[flag_position/bit] & (~(1 << (flag_position%bit)));
}

void diaplay_flags(unsigned int flag_holder[], int size) {

	int i;
	int x=0;
	for (i = 0; i < size; i++)
	{
		
		display_32_flags(flag_holder[i]);
		
	}

}


