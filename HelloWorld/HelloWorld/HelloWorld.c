#include <stdio.h>
#include <stdlib.h>

int main2()
{
	printf("Hello World!\n");
	   
	system("tasklist > 1.txt");
	
	//system("explorer.exe C:\\");

	system("\"C:\\Program Files\\Internet Explorer\\iexplore.exe\" baidu.com");

	system("start mspaint");
	system("pause");
	system("taskkill /f /im mspaint.exe");

	//getchar();
	return 0;
}
