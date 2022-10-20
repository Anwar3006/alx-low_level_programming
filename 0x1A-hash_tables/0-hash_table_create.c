#include "hash_tables.h"

/**
 * *hash_table_create - creates a hash table
 * @size: size of hashtable
 * 
 * Return: pointer to newly created hashtable
 */

hash_table_t *hash_table_create(unsigned long int size)
{
   //allocate the hashtable to a pointer
   hash_table_t *hashtable = malloc(sizeof(hash_table_t) * 1);
   if (hashtable == NULL)
        return NULL;

   //allocate array ponters the quantity determined by @size
   hashtable->array = malloc(sizeof(hash_node_t*) * size);
   if (hashtable->array == NULL)
        return NULL;

   //set each array pointer created to NULL
   int i = 0;
   for (; i < size; i++)
   {
    hashtable->array[i] = NULL;
   }

    return hashtable;
}
