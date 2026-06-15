#ifndef UTIL_H
#define UTIL_H

#define CRT_SECURE_NO_WARNINGS
#define PRODUCT_LEN sizeof(struct Product)
#define FORMAT "%-8d%-15s%-15s%-15s%-12.1lf%-8d\n"
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

extern struct Product astPro[100];

void showmenu(void);
void InputPro(struct Product astPro[]);
void OutputPro(struct Product astPro[]);
void DeletePro(struct Product astPro[]);
void ModifyPro(struct Product astPro[]);
void SearchPro(struct Product astPro[]);
void ShowPro(struct Product astPro[]);
void sleep(unsigned int seconds);

#endif
