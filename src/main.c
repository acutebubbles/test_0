#include <stdio.h>
#include "include.h"
#include "showHello.h"
#include "classNameSet.h"
#include "unit.h"

int main(){
    struct cstl_set* classNameSet = SetInit();
    printf("Hello!\n");
    hello();
    printf("some changes\n");
    printf("more changes\n");
    struct cstl_deque* myDeque = cstl_deque_new(sizeof(int), NULL, NULL);
    
    int value = 10;
    cstl_deque_push_back(myDeque, &value, sizeof(int));
    
    value = 20;
    cstl_deque_push_front(myDeque, &value, sizeof(int));

    printf("Front element: %d\n", *(int*)cstl_deque_front(myDeque));
    printf("Back element: %d\n", *(int*)cstl_deque_back(myDeque));

    cstl_deque_pop_front(myDeque);
    cstl_deque_pop_back(myDeque);

    cstl_deque_delete(myDeque);

    test_f(test);
    test.miniData = 911;
    test_f(test);
    unit test2 = {"alarm_L", "test", 114, {0}}; //see
    alarm_L_f(test2);
    printUnit(test2);
    className key = {"alarm_L",test_f};
    const void* found = cstl_set_find(classNameSet, &key);
    if (found) {
        alarm_L.funcPrt(test2);
        (((className*)found)->funcPrt)(test2);
        printf("Found: %s\n", (char*)(((className*)found)->className));
        printf("Found: %s\n", (char*)(((className*)found)->className));
        void (*funcPrt)(unit) = ((className*)found)->funcPrt;
        if(funcPrt == compare) printf("\nequal\n");
        //funcPrt(test2);
        printf("\nhahaha\n");
        
    } else {
        printf("Not found: %d\n", key);
    }
    printf("end");
    return 0;
}