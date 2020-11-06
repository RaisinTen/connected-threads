#ifndef QUEUE_H
#define QUEUE_H

#include <stdbool.h>

#include "data.h"

typedef struct Queue queue_t;
typedef struct Queue* queue_ptr_t;

struct Queue
{
    data_ptr_t front_data_ptr;
    data_ptr_t back_data_ptr;
};

void queue_init(queue_ptr_t queue_ptr);

void queue_enqueue(queue_ptr_t queue_ptr,
        data_ptr_t data_ptr);

void queue_dequeue(queue_ptr_t queue_ptr);

bool queue_is_empty(queue_t queue);

data_ptr_t queue_peek(queue_t queue);

#endif
