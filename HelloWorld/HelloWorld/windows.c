#include <windows.h>

int main()
{
	MessageBoxA(0,"QQ���ϣ������µ�¼!","QQ����",1);

	ShellExecuteA(0,"open","notepad",0,0,1);
	//���һ��������0���� 1���� 3��� 6��С��

	ShellExecuteA(0,"open","http://www.baidu.com",0,0,1);

	return 0;
}