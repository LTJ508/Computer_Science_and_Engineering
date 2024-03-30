include "emu8086.inc"
org 100h
    
    ;instruction for output of string/array
    mov ah, 9h
    
    ;pointing dx towards the string 's'
    lea dx, s
    
    ;printing the string
    int 21h 
    
    lea dx, newline
    int 21h
    
    ;alternate way of printing a string
    print "Zia"

    lea si, num    
    mov ah, 1h
    mov cx, 3
    
    work:
        int 21h
        mov [si], al
        inc si
        
    loop work
                
   
ret
s db '1', '2', '3', '$'
newline db 10, 13, '$'
num db 100 dup(?)