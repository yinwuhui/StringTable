#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "stringtable.h"

int main()
{
    char *my_table = s_table_create_0("table example", 10, 10, 8);

    /*填充表格x，y处的值为 hello world!!!*/
    s_table_valueset(my_table, 2, 2, "hello");
    s_table_valueset(my_table, 3, 2, "world");

    /*依次填充第 0 行，从第 2 格开始，1 2 3 4 5 6 。。。 分隔符为‘ ’*/
   // s_table_valuesetxs(my_table, 0, 2, "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15", ' ');

    /*依次填充第 0 列，从第 2 格开始，1 2 3 4 5 6 。。。 分隔符为‘ ’*/
   // s_table_valuesetys(my_table, 0, 2, "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15", ' ');

    /*打印表格*/
    const char *tb_string = s_table_string_get(my_table);
    printf("%s", tb_string);

    free(my_table);

    return 0;
}