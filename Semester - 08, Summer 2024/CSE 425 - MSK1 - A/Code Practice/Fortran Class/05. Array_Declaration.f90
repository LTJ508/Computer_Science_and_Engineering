program main
    implicit none

    real array_1(3), dummy_1, magnitude
    integer array_size, i
    write(*,*) 'Enter A_x, A_y, A_z'
    read *, array_1(1), array_1(2), array_1(3)
    array_size = size(array_1)
    dummy_1 = 0
    do i = 1, array_size
        dummy_1 = dummy_1 + array_1(i) * array_1(i)
    end do

    magnitude = sqrt(dummy_1)

    write (*,*) 'Array: ', array_1(1), array_1(2), array_1(3)
    write(*,*) 'magnitude is', magnitude

end program main


