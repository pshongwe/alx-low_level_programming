#include "hash_tables.h"
#include <string.h>

shash_table_t *shash_table_create(unsigned long int size);
int shash_table_set(shash_table_t *ht, const char *key, const char *value);
char *shash_table_get(const shash_table_t *ht, const char *key);
void shash_table_print(const shash_table_t *ht);
void shash_table_print_rev(const shash_table_t *ht);
void shash_table_delete(shash_table_t *ht);

/**
 * shash_table_set - Adds an element to the sorted hash table.
 * @ht: The sorted hash table you want to add or update the key/value to.
 * @key: The key. Cannot be an empty string.
 * @value: The value associated with the key. The value is duplicated.
 * Return: 1 if successful, 0 otherwise.
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
shash_node_t *new_node, *temp, *prev_node;
unsigned long int index;

if (ht == NULL || key == NULL || value == NULL || strlen(key) == 0)
return (0);

index = key_index((const unsigned char *)key, ht->size);
temp = ht->array[index];
while (temp)
{
if (strcmp(temp->key, key) == 0)
{
free(temp->value);
temp->value = strdup(value);
return (1);
}
temp = temp->next;
}

new_node = malloc(sizeof(shash_node_t));
if (new_node == NULL)
return (0);
new_node->key = strdup(key);
new_node->value = strdup(value);
if (new_node->key == NULL || new_node->value == NULL)
{
free(new_node);
return (0);
}

new_node->next = ht->array[index];
ht->array[index] = new_node;
temp = ht->shead;
prev_node = NULL;
while (temp && strcmp(temp->key, key) < 0)
{
prev_node = temp;
temp = temp->snext;
}
new_node->sprev = prev_node;
new_node->snext = temp;

if (prev_node)
prev_node->snext = new_node;
else
ht->shead = new_node;

if (temp)
temp->sprev = new_node;
else
ht->stail = new_node;
return (1);
}

/**
 * shash_table_delete - Deletes a sorted hash table.
 * @ht: The sorted hash table to be deleted.
 */
void shash_table_delete(shash_table_t *ht)
{
shash_node_t *node, *temp;
unsigned long int i;

if (ht == NULL)
return;

for (i = 0; i < ht->size; i++)
{
node = ht->array[i];
while (node != NULL)
{
temp = node;
node = node->next;
free(temp->key);
free(temp->value);
free(temp);
}
}

free(ht->array);
free(ht);
}

/**
 * shash_table_print_rev - Prints a sorted
 * hash table in reverse order.
 * @ht: The sorted hash table to print.
 */
void shash_table_print_rev(const shash_table_t *ht)
{
shash_node_t *node;
char comma_flag = 0;

if (ht == NULL)
return;

printf("{");
node = ht->stail;
while (node != NULL)
{
if (comma_flag)
printf(", ");
printf("'%s': '%s'", node->key, node->value);
comma_flag = 1;
node = node->sprev;
}
printf("}\n");
}

/**
 * shash_table_print - Prints a sorted hash table.
 * @ht: The sorted hash table to print.
 */
void shash_table_print(const shash_table_t *ht)
{
shash_node_t *node;
char comma_flag = 0;

if (ht == NULL)
return;

printf("{");
node = ht->shead;
while (node != NULL)
{
if (comma_flag)
printf(", ");
printf("'%s': '%s'", node->key, node->value);
comma_flag = 1;
node = node->snext;
}
printf("}\n");
}

/**
 * shash_table_get - Retrieves a value associated
 * with a key in a sorted hash table.
 * @ht: The sorted hash table you want to look into.
 * @key: The key you are looking for.
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
shash_node_t *node;
unsigned long int index;

if (ht == NULL || key == NULL)
return (NULL);

index = key_index((const unsigned char *)key, ht->size);
node = ht->array[index];
while (node != NULL)
{
if (strcmp(node->key, key) == 0)
return node->value;
node = node->next;
}

return (NULL);
}

/**
 * shash_table_create - Creates a sorted hash table.
 * @size: The size of the array in the hash table.
 * Return: A pointer to the newly created sorted hash table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
shash_table_t *ht;
unsigned long int i;

ht = malloc(sizeof(shash_table_t));
if (ht == NULL)
return (NULL);

ht->size = size;
ht->array = malloc(sizeof(shash_node_t *) * size);
if (ht->array == NULL)
{
free(ht);
return (NULL);
}
for (i = 0; i < size; i++)
ht->array[i] = NULL;

ht->shead = NULL;
ht->stail = NULL;

return (ht);
}
