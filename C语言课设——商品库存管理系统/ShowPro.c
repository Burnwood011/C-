#include <stdio.h>

#include "product_common.h"

void ShowPro(struct Product astPro[])
{
	int count = load_products(astPro);
	int i;

	if (count == 0) {
		printf("当前没有商品数据！\n");
		return;
	}

	printf("\n商品ID\t商品名称\t生产商\t生产日期\t单价\t数量\n");
	for (i = 0; i < count; i++) {
		printf(FORMAT, DATA);
	}
}
