/// created by ccoman in 1.12.19
#ifndef FOODORDERINGRMODULAR_VARIABLES_H
#define FOODORDERINGRMODULAR_VARIABLES_H
#include <stdio.h>

#define MAX_LINE_CHARS 500
#define MAX_FOOD_TYPE_NAME 40
#define MAX_FOOD_NAME 30
#define MAX_DRINK_NAME 30

FILE *data_file;
int noOfFoods, noOfDrinks;
char **food, ***types, **drinks;
int * noOfFoodTypes;
double ** foodTypePrices, *drinkPrices;
int getConsole;

int GetNoOfFoodTypes(char *line);
void initFoods();
void initNoOfFoods();
void initNoOfFoodTypes();
void initFoodTypes();
void initFoodTypesPrices();
void initNoOfDrinks();
void initDrinks();
void initDrinkPrices();

#endif
