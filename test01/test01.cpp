// test01.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <stdio.h>

int main()
{
	FILE* infile, * outfile;
	errno_t err;
	err = fopen_s(&infile, "test02.txt", "w");
	if (err == 1) {
		printf("读文件成功！\n");
	}


}


