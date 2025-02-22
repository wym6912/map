/***************************************************************************
 * 
 * Copyright (c) 2016 zkdnfcf, Inc. All Rights Reserved
 * $Id$ 
 * 
 **************************************************************************/
 
 /**
 * @file test_map.c
 * @author zk(tjbroadroad@163.com)
 * @date 2016/06/01 09:38:32
 * @version $Revision$ 
 * @brief 
 *  
 **/

#include "rbtree.h"
#include "map.h"
#include <stdio.h>
#include <unistd.h>

root_t tree1 = RB_ROOT, tree2 = RB_ROOT;

int main() {
    /*
    char *key = "hello";
    char *word = "world";
    put(&tree, key, word);

    char *key1 = "hello 1";
    char *word1 = "world 1";
    put(&tree, key1, word1);


    char *key2 = "hello 1";
    char *word2 = "world 2 change";
    put(&tree, key2, word2);

    map_t *data1 = get(&tree, "hello 1");

    if (data1 != NULL)
        printf("%s\n", data1->val);

    map_t *node;
    for (node = map_first(&tree); node; node=map_next(&(node->node))) {
        printf("%s\n", node->key);
    }
 
    // free map if you don't need
    map_t *nodeFree = NULL;
    for (nodeFree = map_first(&tree); nodeFree; nodeFree = map_first(&tree)) {
        if (nodeFree) {
            rb_erase(&nodeFree->node, &tree);
            map_free(nodeFree);
        }
    }
    */
    int x = 1, y = 2;
    map_insert(&tree1, x, (double)y);
    map_insert(&tree2, y, (double)x);
    map_insert(&tree1, y, (double)x);
    map_t *data = map_query(&tree1, x);
    if(data != NULL) printf("%f\n", data -> val);
    data = map_query(&tree2, y);
    if(data != NULL) printf("%f\n", data -> val);
    data = map_query(&tree1, y);
    if(data != NULL) printf("%f\n", data -> val);
    tree_free(tree1);
    return 0;
}

/* vim: set ts=4 sw=4 sts=4 tw=100 */
