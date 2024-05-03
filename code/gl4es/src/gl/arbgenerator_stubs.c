#include "arbgenerator.h"

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#include "arbhelper.h"

#define FAIL(str) curStatusPtr->status = ST_ERROR; if (*error_msg) free(*error_msg); \
		*error_msg = strdup(str); return
void generateVariablePre(sCurStatus *curStatusPtr, int vertex, char **error_msg, sVariable *varPtr) {
    FAIL("This function 'generateVariablePre' is a non-functioning stub");
}
void generateInstruction(sCurStatus *curStatusPtr, int vertex, char **error_msg, sInstruction *instPtr) {
    FAIL("This function 'generateInstruction' is a non-functioning stub");
}
void generateVariablePst(sCurStatus *curStatusPtr, int vertex, char **error_msg, sVariable *varPtr) {
    FAIL("This function 'generateVariablePst' is a non-functioning stub");
}
