#include <stdio.h>

typedef struct list_s {
    char *str;
    struct list_s *next;
} list_t;

size_t print_list(const list_t *h)
{
    size_t count = 0;
    const list_t *current = h;

    while (current != NULL) {
        if (current->str == NULL) {
            printf("[0] (nil)\n");
        } else {
            printf("[%lu] %s\n", strlen(current->str), current->str);
        }
        current = current->next;
        count++;
    }

    return count;
}

