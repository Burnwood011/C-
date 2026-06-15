#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#define CRT_SECURE_NO_WARNINGS
#define PRODUCT_LEN sizeof(struct Product)
#define FORMAT "% -8d% -15s% -15s% -15s% -12.1lf% -18\n"
#define DATA astPro[i].id, astPro[i].name, astPro[i].Producer, astPro[i].Date, astPro[i].price, astPro[i].Amount
typedef struct Product
{
	int id;
	char name[15];
	char Producer[15];
	char Date[15];
	double price;
	int Amount;
} Product;
struct Product astPro[100];

//showmenu函数显示功能模块
void showmenu() {
	printf("**********商品信息管理系统**********\n");
	printf("1.添加商品信息\n");
	printf("2.显示所有商品信息\n");
	printf("3.查询商品信息\n");
	printf("4.修改商品信息\n");
	printf("5.删除商品信息\n");
	printf("6.显示商品信息\n");
	printf("7.退出系统\n");

}


//main函数从此开始
int main() {

}