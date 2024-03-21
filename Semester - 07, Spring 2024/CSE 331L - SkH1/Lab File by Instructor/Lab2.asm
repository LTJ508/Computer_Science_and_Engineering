org 100h
   
   ;taking first input
   mov ah, 1h
   int 21h
   sub al, '0'
   mov bl, al
      
   ;take the second input
   int 21h
   sub al, '0'
   mov bh, al
             
   ;bl = bl + bh
   sub bl, bh
   add bl, '0'
   
   ;instruction for output
   mov ah, 2h
   
   ;printing a newline
   mov dl, 10
   int 21h
   mov dl, 13
   int 21h 
   
   ;printing the output
   mov dl, bl
   int 21h
   
ret




