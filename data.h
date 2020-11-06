#ifndef DATA_H
#define DATA_H

typedef struct Data data_t;
typedef struct Data* data_ptr_t;

struct Data
{
    char* buffer;
    int size;
    data_ptr_t next;
};

#endif
