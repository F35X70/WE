#include <stdio.h>

typedef int (*acpi_table_handler) (int *table);

int acpi_parse_srat(int *table)
{
    printf (":%d\n",*table);
    return 0;
}

int acpi_table_parse (int *id, acpi_table_handler handler)
{
    handler(id);
    (*handler)(id);
    ((acpi_table_handler)(*handler))(id);
    return 0;
}

int main()
{
    int i = 10;
    acpi_table_parse(&i,acpi_parse_srat);
}
