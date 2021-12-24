#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "hashtable.h"


int main(void) {
    hashtable *ht = NULL;
    valType val1;
    // Test 1
    printf("Test 1...");
    if (allocate(&ht,1000000) == -1) {
        fprintf(stdout, "Failed to allocate hash table!\n");
    }
    assert(ht != NULL);
    printf("Passed!\n");
    
    // Test 2
    insert(ht, "key1", 100);
    get(ht, "key1", &val1);
    printf("Test 2...");
    assert(val1 == 100);
    printf("Passed!\n");

    // Test 3
    insert(ht, "key2", 200); 
    get(ht, "key2", &val1);
    printf("Test 3...");
    assert(val1 == 200);
    printf("Passed!\n");

    // Test 4
    insert(ht, "key1", 300);
    get(ht, "key1", &val1);
    printf("Test 4...");
    assert(val1 == 300);
    printf("Passed!\n");

    // Test 5
    insert(ht, "key3", 900);
    get(ht, "key3", &val1);
    printf("Test 5...");
    assert(val1 == 900);
    printf("Passed!\n");
    
    // Test 6
    erase(ht, "key3");
    get(ht, "key3", &val1);
    printf("Test 6...");
    assert(val1 == -1);
    printf("Passed!");
}