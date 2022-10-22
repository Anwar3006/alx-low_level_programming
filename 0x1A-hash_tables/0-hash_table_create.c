#include "hash_tables.h"

/**
 * *hash_table_create - creates a hash table
 * @size: size of hashtable
 * 
 * Return: pointer to newly created hashtable
 */

hash_table_t *hash_table_create(unsigned long int size)
{
   hash_table_t *hashtable = malloc(sizeof(hash_table_t) * 1);
   if (hashtable == NULL)
        return NULL;

   hashtable->size = size;
   hashtable->array = malloc(sizeof(hash_node_t *) * size);
   if (hashtable->array == NULL)
        return NULL;

   unsigned int i;
   for (i = 0; i < size; i++)
   {
    hashtable->array[i] = NULL;
   }

    return hashtable;
}
