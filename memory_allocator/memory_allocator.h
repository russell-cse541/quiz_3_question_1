#ifndef MEMORY_ALLOCATOR_H
#define MEMORY_ALLOCATOR_H

#include <stddef.h> // for size_t

void initialize_memory_pool(size_t size); // Initialize the memory allocator
void destroy_memory_pool(); // Free the memory allocated by the memory allocator
void* mymalloc(size_t size); // Allocate memory from the memory pool
void myfree(void* mem); // Free memory from the memory pool
void display_blocks();

#endif // MEMORY_ALLOCATOR_H