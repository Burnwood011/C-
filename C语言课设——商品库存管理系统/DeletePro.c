#include <stdio.h>

#include "product_common.h"

void DeletePro(struct Product astPro[])
{
	int count = load_products(astPro);
	int id;
	int index;

	if (count == 0) {
		printf("当前没有商品数据！\n");
		return;
	}

	printf("请输入要删除的商品ID：\n");
	scanf("%d", &id);
	index = find_product_index(astPro, count, id);
	if (index == -1) {
		printf("未找到该商品！\n");
		return;
	}

	for (; index < count - 1; index++) {
		astPro[index] = astPro[index + 1];
	}

	save_products(astPro, count - 1);
	printf("删除完成！\n");
}
