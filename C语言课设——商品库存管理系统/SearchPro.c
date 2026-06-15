#include <stdio.h>

#include "product_common.h"

void SearchPro(struct Product astPro[])
{
	int count = load_products(astPro);
	int id;
	int index;

	if (count == 0) {
		printf("当前没有商品数据！\n");
		return;
	}

	printf("请输入要查询的商品ID：\n");
	scanf("%d", &id);
	index = find_product_index(astPro, count, id);
	if (index == -1) {
		printf("未找到该商品！\n");
		return;
	}

	printf("\n商品ID\t商品名称\t生产商\t      生产日期\t      单价\t  数量\n");
	printf(FORMAT,
		astPro[index].id,
		astPro[index].name,
		astPro[index].Producer,
		astPro[index].Date,
		astPro[index].price,
		astPro[index].Amount);
}
