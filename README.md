# Map for c
Current Map Version 1.0
For C++, there is STL to use, and so we have map to use. But for c, We have to implement ourselves. So I implement a C map, I used rb_tree to implement this. The map sort by the key, and get the value in O(logn).

# Usage
I grab rb_tree from linux kernel. Just import map.h, rbtree.h, rbtree.c in you project.

# Example

```c

//put the key and value into map
root_t tree = RB_ROOT; 
int x = 1;
double y = 2;
map_insert(&tree1, x, y);

//get the value from key
map_t *data = map_query(&tree1, x);
if (data != NULL) printf("%f\n", data -> val);

//Traversal
map_t *node;
for (node = map_first(&tree); node; node=map_next(&(node->node))) {
	printf("%f\n", node -> val);
} 
//Free map node
tree_free(tree1);
```

# Bug Reporting and Feature Requests
If you find a bug or have an enhancement request, simply file an Issue and send a message (via github messages) to the Committers to the project to let them know that you have filed an Issue.

