
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

####windows常用函数
```
#include<stdio.h>
#include<stdlib.h>
#include <windows.h>

int main() 
{
	MessageBoxA(0, "因为网络故障，请重新登录", "QQ故障", 0);
	//参数1: 0代表系统弹出
	//参数2:内容
	//参数3:标题
	//参数4:按钮样式
	
	ShellExecuteA(0, "open", "notepad", 0, 0, 1);
	//参数1:父窗口句柄
	//参数2:动作
	//参数3:文件或程序
	//参数4:传递给程序的参数
	//参数5:缺省目录
	//参数6:打开选项,0隐藏，1用最近的大小和位置 2，最小化，3，最大化，4同1 但不激活， 5，同1，6，最小化，不激活
	 
	return 0;
}

//工程属性，设置编译结构为dll
//通过_declspec(dllexport)可声明函数为动态调用
_declspec(dllexport)  void go1123()
{
	while (1)
	{
		MessageBoxA(0, "文本", "标题", 1);
		//20代表桌面, 3代表马上生效
		SystemParametersInfoA(20, 0, "C:\\Users\\yincheng01\\Pictures\\2.jpg", 3);
		//调用系统播放器播放mp3
		system("C:\\Users\\yincheng01\\Pictures\\123.mp3");
		Sleep(12000);	
	}
}

```

####转义字符

转义字符 | 描述 | 十进制值
------- | ------- | -------
\'	| 单引号 | 039
\"	| 双引号 | 034
\\\ |	反斜杠 | 092
\0	| 空字符 | 000
\a |	响铃 | 007
\b |	后退 | 008
\f	 | 走纸 | 012
\n	 | 换行 | 010
\r	 | 回车 | 013
\t	 | 水平制表符 | 009
\v	| 垂直制表符 | 011
\xnn	| 表示十六进制数(nn)  | 
\ddd | 三位八进制

####输入输出
```

//关闭安全检查 vs2013  springf
#define _CRT_SECURE_NO_WARNINGS

void testIO()
{
    char str1[10];
    scanf("%s", str1);
    printf("%s\n", str1);
   
    char d = getchar();
    printf("%d", d);
    
    char c= getchar();
    putchar(c);
    printf("%d", c);
    
    char str[15];
    gets(str);
    puts(str);
    
    char string[50];
    sprintf(string, "%s", "calc");
    //sprintf(str, "%s%s", "s1", "s 2");
    //参数1:用语存储产生的字符串
    //参数2：格式化串
    //参数3～n， 待拼装的值
    
}
```
####格式占位符
%a,%A 读入一个浮点值(仅C99有效) 　　
%c 读入一个字符 　　
%d 读入十进制整数 　　
%i 读入十进制，八进制，十六进制整数 　　
%o 读入八进制整数 　　
%x,%X 读入十六进制整数 　　
%s 读入一个字符串，遇空格、制表符或换行符结束。%f,%F,%e,%E,%g,%G 用来输入实数，可以用小数形式或指数形式输入。 　　
%p 读入一个指针 　　
%u 读入一个无符号十进制整数 　　
%n 至此已读入值的等价字符数 　　
%[] 扫描字符集合 　　
%% 读%符号

  
