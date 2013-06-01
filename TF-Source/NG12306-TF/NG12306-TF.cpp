// NG12306-TF.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	char c;
	do 
	{
		// TO DO; Init dll
		printf("Press q or Q to exit...\n");
		c = _getch();
		if('f' == c)
		{

		}
		else if('d' == c)
		{
			// TO DO; dump
		}
	} while (c != 'q' && c != 'Q');
	// TO DO; Log

	return 0;
}

