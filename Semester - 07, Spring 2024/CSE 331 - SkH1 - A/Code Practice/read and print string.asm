include "emu8086.inc"
org 100h
   ;read a single digit number from keuboard and display the number on screen, using macro
   
    printstring macro msg           ;printstrin user defined macro name, msg macro's arguments
        mov ah, 09h                 ;display string function
        mov dx, offset msg          ;initialize dx to message
        int 21h                     ;call DOS service
    endm
    
    _DATA segment                   ;_Data - name of user defined sengment
        cr equ 0dh                  ;ASCII code for carriage return
        lf equ 0ah                  ;ASCII code for line feed
        msg1 db 'Enter a single digit: ', '$'
        msg2 db cr, lf, 'You have entered: ', '$'
        result db 3 dup('$')
    _DATA ends
    
    _CODE segment                   ;_CODE - user definde segment for code segment
        assume cs: _CODE, ds: _DATA ;initialize CS, DS
    start:
        mov ax, _DATA              ;initialize DS to the datasegment
        mov ds, ax
        printstring msg1
        mov ah, 01h                 ;get char from keyboard
        int 21h                     ;call DOS service
        mov si, offset result
        mov [si], al                ;store the digit in result
        printstring msg2
        printstring result
        mov ah, 4ch                 ;program terminate function
        mov al, 00h                 ;return code for error level setting
        int 21h                     ;call DOS service
    _CODE ends                      ;end of segment
    end start                       ;end of the program
ret