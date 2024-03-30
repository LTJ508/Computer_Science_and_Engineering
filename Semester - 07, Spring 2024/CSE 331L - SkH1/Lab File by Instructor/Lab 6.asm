include "emu8086.inc"
org 100h 
    
    mov ah, 1h
    mov cx, 5
    mov bx, 5
    lea si, s
    
    outer_loop:
        mov cx, 5
        
        inner_loop:
            print "Hello "
             
        loop inner_loop
        mov cx, bx
        dec bx         
        
    loop outer_loop
    
ret
s db 100 dup(?)