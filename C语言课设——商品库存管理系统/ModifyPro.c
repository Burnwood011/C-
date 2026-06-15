#include <stdio.h>

#include "product_common.h"

void ModifyPro(struct Product astPro[])
{
	int count = load_products(astPro);
	int id;
	int index;

	if (count == 0) {
		printf("当前没有商品数据！\n");
		return;
	}

	printf("请输入要修改的商品ID：\n");
	scanf("%d", &id);
	index = find_product_index(astPro, count, id);
	if (index == -1) {
		printf("未找到该商品！\n");
		return;
	}

	printf("请输入新的商品名称：\n");
	scanf("%14s", astPro[index].name);
	printf("请输入新的生产商：\n");
	scanf("%14s", astPro[index].Producer);
	printf("请输入新的生产日期：\n");
	scanf("%14s", astPro[index].Date);
	printf("请输入新的单价：\n");
	scanf("%lf", &astPro[index].price);
	printf("请输入新的数量：\n");
	scanf("%d", &astPro[index].Amount);

	save_products(astPro, count);
	printf("修改完成！\n");
}
