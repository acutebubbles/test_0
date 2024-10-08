#ifndef __UNIT_H__
#define __UNIT_H__
typedef struct unit{
    char className[15];
    char name[15];
    int miniData;
    int data[15];
}unit;
void printUnit(unit u);
#endif