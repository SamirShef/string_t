#include <string.h>
#include <stdlib.h>

typedef struct {
    char *value;
    size_t length;
} string_t;

string_t *str_create(const char *val) {
    string_t *str = (string_t*)malloc(sizeof(string_t));
    str->length = strlen(val);
    str->value = strdup(val);
    return str;
}

void str_concat(string_t *str, const char *val) {
    str->length += strlen(val);
    strcat(str->value, val);
}

void str_change(string_t *str, const char *val) {
    str->length = strlen(val);
    str->value = strdup(val);
}

void str_del(string_t *str) {
    free(str->value);
    free(str);
}