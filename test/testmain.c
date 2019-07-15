#include <stdio.h>

extern void test_arraylist();
extern void test_arraylist_index_of();
extern void test_arraylist_sort();

extern void test_list();
extern void test_list_sort();

extern void test_queue();

extern void test_bitmap();

extern void test_matrix();

extern void test_bstree();
extern void test_bstree_remove();

int main(int argc, char *argv[])
{
    printf("======= Tests start ======= \n");
    test_arraylist();
    test_arraylist_index_of();
    test_arraylist_sort();

    test_list();
    test_list_sort();

    test_queue();

    test_bitmap();

    test_matrix();

    test_bstree();
    test_bstree_remove();

    printf("======= Tests finished ======= \n");
    return 0;
}
