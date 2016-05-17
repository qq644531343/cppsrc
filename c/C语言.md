
##基础相关:
####system函数

```
//windows
#include <stdlib.h>
int main()
{
	system("start calc"); 
	//加start，并行执行
	//不加则同步打开， 等待本次操作完成，再执行下次system函数
}


//MacOS
#include <stdlib.h>
int main() 
{
	//打开Applications目录下的应用
	//-n表示新起进程， -a表示带参数
	 system("open -a /Applications/Firefox.app http://www.google.com");
	 
	 system("open -a Safari http://www.baidu.com");
	 
	 system("open -n /Applications/QQ.app");
}
```
system函数可以执行大多数能在控制台中打开的程序。

