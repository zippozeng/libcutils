//
// Created by Zippo on 2019/12/12.
//
#include <string.h>
#include "include/hashmap.h"
#include "include/str_parms.h"
#include "include/list.h"
#include <stdio.h>

static int str_hash_fn(void *str) {
    uint32_t hash = 5381;
    char *p;
    for (p = str; p && *p; p++)
        hash = ((hash << 5) + hash) + *p;
    return (int) hash;
}

static bool str_eq(void *key_a, void *key_b) {
    return !strcmp((const char *) key_a, (const char *) key_b);
}

int main() {
    Hashmap *hashmap = hashmapCreate(10, str_hash_fn, str_eq);
    hashmapPut(hashmap, "111", "aaaa");
    hashmapPut(hashmap, "222", 1);
    char *value = hashmapGet(hashmap, "111");
    int intValue = hashmapGet(hashmap, "222");
    printf("value:%s\nint:%d", value, intValue);
    struct listnode *listnode = malloc(sizeof(struct listnode));
    list_init(listnode);
    list_add_head(listnode,);
    return 0;
}

