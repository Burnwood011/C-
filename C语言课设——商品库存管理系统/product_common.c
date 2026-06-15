#include <stdio.h>

#include "product_common.h"

int load_products(struct Product astPro[])
{
	FILE* fp = fopen("product.txt", "rb");
	int count = 0;

	if (fp == NULL) {
		return 0;
	}

	while (count < 100 && fread(&astPro[count], sizeof(struct Product), 1, fp) == 1) {
		count++;
	}

	fclose(fp);
	return count;
}

void save_products(struct Product astPro[], int count)
{
	FILE* fp = fopen("product.txt", "wb");
	int i;

	if (fp == NULL) {
		printf("文件打开失败！\n");
		return;
	}

	for (i = 0; i < count; i++) {
		fwrite(&astPro[i], sizeof(struct Product), 1, fp);
	}

	fclose(fp);
}

int find_product_index(struct Product astPro[], int count, int id)
{
	int i;

	for (i = 0; i < count; i++) {
		if (astPro[i].id == id) {
			return i;
		}
	}

	return -1;
}