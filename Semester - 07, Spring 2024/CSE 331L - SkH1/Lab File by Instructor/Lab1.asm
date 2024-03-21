org 100h
    
    mov ah, 1h ;instruction to take input
    int 21h    ;take the first input
    mov bh, al 
    
    int 21h    ;take the second input
    mov bl, al
           
    mov ah, 2h ;instruction for the output
    mov dl, bh ;move the value from bh to dl
    int 21h
    
    mov dl, bl
    int 21h
    
ret