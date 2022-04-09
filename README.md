# StringTable
创建字符串表格，支持增删查改，格式化输出。

char *my_table = s_table_create_0("table example", 5, 4, 16);

s_table_valuesetxs(my_table, 0, 1, "name sex age work", ' ');

s_table_valuesetxs(my_table, 1, 1, "xiaoming man 22 programmer", ' ');

s_table_valuesetxs(my_table, 2, 1, "xiaohong woman 22 PM", ' ');

s_table_valuesetys(my_table, 0, 1, "1 2 3 4 5 6", ' ');

s_table_valueset(my_table, 3, 1, "23");

s_table_valueset(my_table, 4, 2, "tester");

const char *tb_string = s_table_string_get(my_table);
printf("%s", tb_string);

free(my_table);

打印结果：

![image](https://user-images.githubusercontent.com/48472195/162560809-b593b2a0-5442-4ad8-a875-2437c1e11731.png)


