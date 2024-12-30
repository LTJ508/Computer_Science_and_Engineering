program main
    implicit none
    integer i, n
    real :: pi, area, radius
    real, dimension(:), allocatable :: radius_array
    real, dimension(:), allocatable :: area_array
    pi = 3.1416

    write(*, *) 'Enter the data pointers:'
    read *, n

    allocate(radius_array(n))
    allocate(area_array(n))

    do i = 1, n
        radius = i
        area = pi * radius**2
        radius_array(i) = radius
        area_array(i) = area
    end do

    open(12, file = 'example.dat', status = 'new')

    do i = 1, n
        write(12, *) radius_array(i), area_array(i)
    end do

    close(12)

    write(*, *) 'Data stored successfully..'

    deallocate(radius_array)
    deallocate(area_array)
end program main
