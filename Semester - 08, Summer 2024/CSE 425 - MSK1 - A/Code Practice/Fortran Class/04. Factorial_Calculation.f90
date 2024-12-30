program main
    implicit none

    integer:: factorial_n, n, i
    print *, 'Enter the number: '
    read *, n
    factorial_n = 1
    do i = 1, n
    if(i > 4) exit
    factorial_n = factorial_n * i
    end do
    write(*,*) n, factorial_n

end program main
