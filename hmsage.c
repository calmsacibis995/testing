#include "header.h"
#include <stdio.h>

int main()
{
	int hmsAge = (HMSAGE * 4) + 340 - 2000;
	printf("%s's hms age is %d", MYNAME, hmsAge);
	
	return 0;
}
