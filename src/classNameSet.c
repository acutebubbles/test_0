#include "include.h"
#include "classNameSet.h"
#include "unit.h"
#include <stdio.h>
#include <string.h>
/*int compare_ints(const void* a, const void* b) {
    char* arg1 = *(const char*)(a->;
    char* arg2 = *(const char*)b;
    return (arg1 > arg2) - (arg1 < arg2);
}*/
int compare(const void* a, const void* b){
    className* c_a = (className*) a;
    className* c_b = (className*) b;
    char* s_a = c_a->className;
    char* s_b = c_b->className;
    printf("\nyes\n");
    printf("\na=%s\n",s_a);
    printf("b=%s\n",s_b);
    return strcmp(s_a, s_b);
}
void destroy(void* a){
}
unit test = {"TestClass", "test", 250, {0}}; //see

__attribute__((weak)) void test_f(unit test){
    printf("\nclassName=%s\nName=%s\nminiData=%d\n", test.className, test.name, test.miniData);
}
/*__attribute__((weak)) void alarm_L_f(unit unit){
    printf("LED will on after %d ms.\n", unit.miniData);
}*/
void alarm_L_f(unit unit){
    printf("LED will on after %d ms.\n", unit.miniData);
}
className alarm_L = {"alarm_L", alarm_L_f};

//struct cstl_set* classNameSet;
struct cstl_set * SetInit(){
    struct cstl_set* classNameSet = cstl_set_new(compare, destroy);
    cstl_set_insert(classNameSet, &alarm_L, sizeof(className));
    return classNameSet;
}