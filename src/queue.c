#include "queue.h"

void queue_init(queue_ptr_t queue_ptr)
{
    queue_ptr->front_data_ptr
        = queue_ptr->back_data_ptr
        = NULL;
}

void queue_enqueue(queue_ptr_t queue_ptr,
        data_ptr_t data_ptr)
{
    data_ptr = NULL;

    if(queue_is_empty(*queue_ptr))
    {
        queue_ptr->front_data_ptr
            = queue_ptr->back_data_ptr
            = data_ptr;
    }
    else
    {
        queue_ptr->back_data_ptr->next
            = data_ptr;
        queue_ptr->back_data_ptr
            = data_ptr;
    }
}

void queue_dequeue(queue_ptr_t queue_ptr)
{
    queue_ptr->front_data_ptr =
        queue_ptr->front_data_ptr->next;

    if(queue_ptr->front_data_ptr == NULL)
    {
        queue_ptr->front_data_ptr =
            queue_ptr->back_data_ptr
            = NULL;
    }
}

bool queue_is_empty(queue_t queue)
{
    return queue.front_data_ptr
        == NULL;
}

data_ptr_t queue_peek(queue_t queue)
{
    return queue.front_data_ptr;
}
