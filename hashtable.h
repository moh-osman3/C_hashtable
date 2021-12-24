#ifndef HASH_TABLE
#define HASH_TABLE

#define MAX_SIZE 4096

/*
 * keys for this hash table are strings
 * and the values are integers.
 */
typedef char keyType[MAX_SIZE];
typedef int valType;

typedef struct ht_elt {
    keyType key;
    valType val;
} ht_elt;

typedef struct hashtable {
    struct ht_elt *table;
    int capacity;
    int num_elt;
} hashtable;

typedef struct node {
    ht_elt elt;
    struct node *next;
    struct node *prev;
} node;

int allocate(hashtable **map, int size);

int insert(hashtable *map, keyType key, valType val);

int get(hashtable *map, keyType key, valType val);

int erase(hashtable *map, keyType key);

int deallocate(hashtable *map);

#endif
