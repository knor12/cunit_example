#include <stdlib.h>
#include <stdint.h>
#include <stdio.h>
#include "add.h"
#include <CUnit/CUnit.h>
#include <CUnit/Basic.h>


void test_uiAdd(){

    CU_ASSERT(uiAdd(1,1) == 2);
    CU_ASSERT(uiAdd(0,1) == 1);
    CU_ASSERT(uiAdd(1,0) == 1);
    CU_ASSERT(uiAdd(0,0) == 0); 
}


int main(int argc , char * argv[]){

    CU_initialize_registry();
    CU_pSuite suite = CU_add_suite("test_uiAdd", 0, 0);

    CU_add_test(suite, "test_uiAdd", test_uiAdd);

    CU_basic_set_mode(CU_BRM_VERBOSE);
    CU_basic_run_tests();
    CU_cleanup_registry();

    printf("Hello world\n");
    
    //CU_ASSERT(2);
	


    return 0;
}
