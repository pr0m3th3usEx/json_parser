/*
** PR0M3TH3USEX PROJECT, 2019
*/

#include "json_parser.h"

json_object_t *get_json_object(json_value_t *v)
{
    json_object_t *obj = NULL;

    if (v->value_type != J_OBJ)
        return NULL;
    obj = v->value.obj;
    return obj;
}

json_array_t get_array_value(json_value_t *v)
{
    return v->value.array;
}

int get_int_value(json_value_t *v)
{
    if (v->value_type != J_NUM)
        return J_ERROR_INT;
    return v->value.number;
}