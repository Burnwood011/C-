#ifndef PRODUCT_COMMON_H
#define PRODUCT_COMMON_H

#include "util.h"

int load_products(struct Product astPro[]);
void save_products(struct Product astPro[], int count);
int find_product_index(struct Product astPro[], int count, int id);

#endif