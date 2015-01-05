#include <windows.h>

int main()
{
	MessageBoxA(0,"QQ故障，请重新登录!","QQ故障",1);

	ShellExecuteA(0,"open","notepad",0,0,1);
	//最后一个参数：0隐藏 1正常 3最大化 6最小化

	ShellExecuteA(0,"open","http://www.baidu.com",0,0,1);

	return 0;
}