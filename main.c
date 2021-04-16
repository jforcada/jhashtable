#include <stdio.h>

#include "hash_table.h"

int main() {
    printf("starting program\n");
    ht_hash_table* ht = ht_new();
    printf("created hash table\n");

    printf("add element (\"hola\",\"adios\")\n");
    ht_insert(ht, "hola", "adios");
    printf("add element (\"pipi\",\"caca\")\n");
    ht_insert(ht, "pipi", "caca");
    printf("add element (\"heeey\",\"hooooy\")\n");
    ht_insert(ht, "heeey", "hooooy");

    printf("retrieve element with key \"hola\"\n");
    char* val = ht_search(ht, "hola");
    printf("result: %s\n", val);
    printf("retrieve element with key \"pipi\"\n");
    val = ht_search(ht, "pipi");
    printf("result: %s\n", val);
    printf("retrieve element with key \"heeey\"\n");
    val = ht_search(ht, "heeey");
    printf("result: %s\n", val);

    ht_del_hash_table(ht);
    printf("deleted hash table\n");
}
