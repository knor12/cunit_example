#include <stdlib.h>
#include <stdint.h>
#include <stdio.h>
#include "add.h"
#include <CUnit/CUnit.h>
#include <CUnit/Basic.h>


void test_uiAdd(){

    //add asserts to the test
    CU_ASSERT(uiAdd(0xff00ff00,0x00ff00ff) == 0xffffffff);
    CU_ASSERT(uiAdd(0,1) == 1);
    CU_ASSERT(uiAdd(1,0) == 1);
    CU_ASSERT(uiAdd(0,0) == 0); 
}


void test_ulAdd(){

    CU_ASSERT(ulAdd(0xff00ff00ff00ff00,0x00ff00ff00ff00ff) == 0xffffffffffffffff);
    CU_ASSERT(ulAdd(0,1) == 1);
    CU_ASSERT(ulAdd(1,0) == 1);
    CU_ASSERT(ulAdd(0,0) == 0); 

}


int main(int argc , char * argv[]){

    CU_initialize_registry();
    CU_pSuite suite1 = CU_add_suite("test_uiAdd", 0, 0);
    CU_pSuite suite2 = CU_add_suite("test_ulAdd", 0, 0);

    CU_add_test(suite1, "test_uiAdd", test_uiAdd);
    CU_add_test(suite2, "test_ulAdd", test_ulAdd);

    CU_basic_set_mode(CU_BRM_VERBOSE);
    CU_basic_run_tests();
    CU_cleanup_registry();

    return 0;
}
