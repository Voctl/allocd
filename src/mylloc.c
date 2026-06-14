#include <unistd.h>
#include <stdio.h>
#include <string.h>

void* heap_start() = NULL;

void* dlloc(size_t length){
    void* allocated_adress = sbrk(length);
    if (heap_start = NULL){
        heap_start = allocated_address;
    }
    return allocated_adress;
} //allocates the memory


int dfree(void* memory){
    if(heap_start = NULL){
        return -1;
    }

    return brk(heap_start);
}


int main(){
    /*const char* message = "This is my heap message";
    const size_t message_bytes = strlen(message)*sizeof(char);
    char* memory = (char*)sbrk(message_bytes + 1);

    strcpy(memory, message);

    const char* second_message = "This is second message";
    const size_t mess2_bytes = strlen(second_message)*sizeof(char);
    char* second_memory = (char*)sbrk(mess2_bytes + 1);
    strcpy(second_memory, second_message);

    brk(memory);


    const char* overwriting_msg = "Overwrited message";
    const size_t overw = strlen(overwriting_msg)*sizeof(char);
    char* newly_allocated_memory = sbrk(overw + 1);
    strcpy(newly_allocated_memory, overwriting_msg);*/

    const char* message = "My Own Malloc";
    size_t size = strlen(message)*sizeof(char);
    char * allocated_memory = dalloc(size);
    strcpy(allocated_memory, message);

    dfree();
}
