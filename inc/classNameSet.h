#ifndef __CLASSNAMESET_H__
#define __CLASSNAMESET_H__
#include "unit.h"
typedef struct className className;
struct className{
    char className[15];
    void (*funcPrt)(unit);
    int x;
};
int compare(const void* a, const void* b);
void destroy(void* a);
__attribute__((weak)) void test_f(unit test);
//__attribute__((weak)) void alarm_L_f(unit unit);

void alarm_L_f(unit unit);
extern unit test;                               //see
extern className alarm_L;
//extern struct cstl_set* classNameSet;
struct cstl_set * SetInit();
#endif