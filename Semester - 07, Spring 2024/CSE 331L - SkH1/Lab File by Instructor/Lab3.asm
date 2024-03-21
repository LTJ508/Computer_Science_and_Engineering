org 100h
    
    ;pointing si to the beginning of the string - s
    lea si, s
    mov ah, 1h
    
    ;defining the body of the label
    work:
        int 21h
        ;exiting when enter is pressed 
        cmp al, 13
        je done
        
        ;storing the input in the string accordingly
        mov [si], al
        inc si
    
    ;calling the label    
    jmp work
    
    ;defining the exit label
    done:
        ret       

ret
s db 100 dup(?)