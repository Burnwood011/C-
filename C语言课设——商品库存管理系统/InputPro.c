#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#include "product_common.h"

void InputPro(struct Product astPro[])//入库函数实现
{
	int count = load_products(astPro);
	char choose = 'y';

	while (choose == 'y' || choose == 'Y') {
		struct Product product;
		int index;

		if (count >= 100) {
			printf("库存已满，无法继续入库！\n");
			break;
		}

		printf("请输入商品ID：\n");
		scanf("%d", &product.id);
		index = find_product_index(astPro, count, product.id);
		if (index != -1) {
			printf("该商品ID已存在，请重新输入！\n");
			printf("是否继续入库(y/n)：\n");
			scanf(" %c", &choose);
			continue;
		}

		printf("请输入商品名称：\n");
		scanf("%14s", product.name);
		printf("请输入生产商：\n");
		scanf("%14s", product.Producer);
		printf("请输入生产日期：\n");
		scanf("%14s", product.Date);
		printf("请输入商品单价：\n");
		scanf("%lf", &product.price);
		printf("请输入商品数量：\n");
		scanf("%d", &product.Amount);

		astPro[count++] = product;
		printf("是否继续入库(y/n)：\n");
		scanf(" %c", &choose);
	}

	save_products(astPro, count);
}
    