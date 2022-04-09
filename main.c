#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "stringtable.h"

int main()
{
    char *my_table = s_table_create_0("table example", 5, 4, 16);

    /*依次填充第 0 行，从第 2 格开始，1 2 3 4 5 6 。。。 分隔符为‘ ’*/
    s_table_valuesetxs(my_table, 0, 1, "name sex age work", ' ');
    s_table_valuesetxs(my_table, 1, 1, "xiaoming man 22 programmer", ' ');
    s_table_valuesetxs(my_table, 2, 1, "xiaohong woman 22 PM", ' ');

    /*依次填充第 0 列，从第 2 格开始，1 2 3 4 5 6 。。。 分隔符为‘ ’*/
    s_table_valuesetys(my_table, 0, 1, "1 2 3 4 5 6", ' ');

    /*填充表格x，y处的值为 hello world!!!*/
    s_table_valueset(my_table, 3, 1, "23");
    s_table_valueset(my_table, 4, 2, "tester");

    /*打印表格*/
    const char *tb_string = s_table_string_get(my_table);
    printf("%s", tb_string);

    free(my_table);

    return 0;
}