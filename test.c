#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "hashtable.h"


int main(void) {
    hashtable *ht = NULL;
    if (allocate(&ht,1000000) == -1) {
        fprintf(stdout, "Failed to allocate hash table!\n");
    }

    if (insert(ht, "key1", 100) == -1) {
        fprintf(stdout, "Failed to insert key1\n");
    }
    
    if (insert(ht, "key2", 200) == -1) {
        fprintf(stdout, "Failed to insert key1\n");
    }
    valType val1;
    valType val2;
    get(ht, "key1", &val1);
    get(ht, "key2", &val2);
    fprintf(stdout, "the value for key1 is %i\n", val1);
    fprintf(stdout, "the value for key2 is %i\n", val2);


}