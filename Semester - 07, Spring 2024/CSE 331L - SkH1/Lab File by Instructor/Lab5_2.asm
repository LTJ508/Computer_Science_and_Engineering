org 100h
    
    mov ah, 1h
    lea si, num
    mov cx, 3
       
    fun:
        call work
        
    loop fun
        

ret

work proc
        int 21h
        mov [si], al
        inc si
        ret
work endp
        
num db 100 dup(?)