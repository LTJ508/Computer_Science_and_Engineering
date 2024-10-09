program main
    implicit none
    integer n, output, summation
    print *, "Enter the number of input: "
    read *, n
    output = summation(n)
    print *, "Summation is: ", output
end program

integer function summation(n)
    integer number, sum, i, n
    sum = 0
    do i = 1, n
        print *, "Enter the number-", i
        read *, number
        sum = sum + number
    end do
    summation = sum
    return
end function summation
