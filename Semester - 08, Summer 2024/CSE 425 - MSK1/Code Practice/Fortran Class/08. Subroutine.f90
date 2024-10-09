program main
    implicit none
    integer num1, num2
    print *, "Enter two number as num1 num2: "
    read *, num1, num2

    call swap_two_number(num1, num2)
    print *, num1, num2

    contains

    subroutine swap_two_number(x, y)
        integer x, y, temp
        temp = x
        x = y
        y = temp
    end subroutine swap_two_number
end program main
