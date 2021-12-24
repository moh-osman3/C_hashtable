/*
 * -- hashtable.c
 *
 *  implements a hashtable library for C
 *
 */

#include <stdio.h>
#include "hashtable.h"

/*********************************************************** 
 * -- allocate --
 *
 * This function is responsible for allocating space
 * for a new hashtable
 *
 * Params:
 * map [in/out]  hashtable to allocate space for
 * size [in]     number of "buckets"
 *
 ***********************************************************
 */

int allocate(hashtable **map,  // IN/OUT
             int size)         // IN
{
    (void) map;
    (void) size;
    return 0;
}


/*********************************************************** 
 * -- insert --
 *
 * This function is responsible for inserting a key
 * into the hashtable
 *
 * Params:
 * map [in/out]  hashtable to allocate space for
 * key [in]      key to be inserted
 * val [in]      value associated with the key
 *
 ***********************************************************
 */

int insert(hashtable *map,  // IN/OUT
           keyType key,     // IN
           valType val)     // IN
{
    (void) map;
    (void) key;
    (void) val;
    return 0;
}


/*********************************************************** 
 * -- get --
 *
 * This function is responsible for getting the value that
 * is associated with key.
 *
 * Params:
 * map [in/out]  hashtable to allocate space for
 * key [in]      key of item to get
 * val [in/out]  place to store value
 *
 ***********************************************************
 */

int get(hashtable *map,  // IN
        keyType key,     // IN
        valType val)     // IN/OUT
{
    (void) map;
    (void) key;
    (void) val;
    return 0;
}


/*********************************************************** 
 * -- insert --
 *
 * This function is responsible for inserting a key
 * into the hashtable
 *
 * Params:
 * map [in/out]  hashtable to allocate space for
 * size [in]     number of "buckets"
 *
 ***********************************************************
 */

int erase(hashtable *map, // IN/OUT
          keyType key)    // IN
{
    (void) map;
    (void) key;
    return 0;
}


/*********************************************************** 
 * -- insert --
 *
 * This function is responsible for inserting a key
 * into the hashtable
 *
 * Params:
 * map [in/out]  hashtable to allocate space for
 * size [in]     number of "buckets"
 *
 ***********************************************************
 */

int deallocate(hashtable *map) // IN
{
    (void) map;
    return 0;
}
