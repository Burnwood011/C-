#include <stdio.h>

#include "product_common.h"

void OutputPro(struct Product astPro[])
{
	int count = load_products(astPro);
	int id;
	int amount;
	int index;

	if (count == 0) {
		printf("当前没有商品数据！\n");
		return;
	}

	printf("请输入要出库的商品ID：\n");
	scanf("%d", &id);
	index = find_product_index(astPro, count, id);
	if (index == -1) {
		printf("未找到该商品！\n");
		return;
	}

	printf("请输入出库数量：\n");
	scanf("%d", &amount);
	if (amount <= 0 || amount > astPro[index].Amount) {
		printf("出库数量不合法！\n");
		return;
	}

	astPro[index].Amount -= amount;
	if (astPro[index].Amount == 0) {
		for (; index < count - 1; index++) {
			astPro[index] = astPro[index + 1];
		}
		count--;
	}

	save_products(astPro, count);
	printf("出库完成！\n");
}
