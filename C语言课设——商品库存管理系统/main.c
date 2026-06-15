#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#include "util.h"

struct Product astPro[100];

//showmen
void showmenu() {
	printf("----------欢迎使用商品管理系统----------\n");
	printf("1.商品入库\n");
	printf("2.商品出库\n");
	printf("3.删除商品\n");
	printf("4.修改商品\n");
	printf("5.查询商品\n");
	printf("6.显示所有商品\n");
	printf("7.退出系统\n");
	printf("---------------------------------------\n");


}


//main函数从此处开始
int main() {
	int choose=0;

	do {
		system("cls");
		showmenu();
		scanf("%d", &choose);
		if (choose < 1 || choose > 7) {
			printf("输入错误，请重新输入：\n");
		}
		else {
			switch (choose) {
			case 1:
				printf("商品入库\n");
				//模块一
				InputPro(astPro);
				printf("入库成功！\n");
				sleep(1);
				break;
			case 2:
				printf("商品出库\n");
				//模块二
				OutputPro(astPro);
				printf("出库成功！\n");
				sleep(1);
				break;
			case 3:
				printf("删除商品\n");
				//模块三
				DeletePro(astPro);
				printf("删除成功！\n");
				sleep(1);
				break;
			case 4:
				printf("修改商品\n");
				//模块四
				 ModifyPro(astPro);
				printf("修改成功！\n");
				sleep(1);
				break;
			case 5:
				printf("查询商品\n");
				//模块五
				 SearchPro(astPro);
				 printf("查询成功！\n");
				sleep(1);
				break;
			case 6:
				printf("显示所有商品\n");
				//模块六
				 ShowPro(astPro);
				printf("显示成功！\n");
				sleep(1);
				break;
			case 7:
				printf("退出系统成功，再会\n");
				return 0;
			}
		}
	}while (1);
}