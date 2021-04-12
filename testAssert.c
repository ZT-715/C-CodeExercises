//Trying out the use of <assert.h>

//#define NDEBUG
#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

static int number = 0;
static int assertTest();

int main(int argc, char *argv[]) {
    assert(number == 0);

    if (argc < 2) {
        fprintf(stderr, "No argument, use 0 or non-zero number as argument.\n");
        return(EXIT_FAILURE);
    }
    else {
        number = atoi(argv[1]);
    }
    
    assert(assertTest()==0);

    assertTest();

    printf("end\n");
    return(EXIT_FAILURE);
}

static int assertTest() {
    
    #ifdef NDEBUG
    #undef NDEBUG
    #include <assert.h>
    printf("assert %d == 1.\n", number);
    assert(number == 1);
    #endif // !NDEBUG
   
    return number;
}