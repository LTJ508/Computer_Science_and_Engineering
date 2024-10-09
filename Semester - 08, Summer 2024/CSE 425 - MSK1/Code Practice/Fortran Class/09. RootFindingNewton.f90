program rootfinding_newton
    implicit none
    real :: x = 1
    real :: error_tol = 0.000001
    integer i, maxit, converg

    i = 0
    maxit = 30
    converg = 0

    do while(converg == 0 .and. i < maxit)
        x = x - f_x(x)/f_deriv_x(x)
        write (*, *) x, f_x(x)
        i = i + 1
        if(abs(f_x(x)) <= error_tol) converg = 1
    end do

    if(converg == 1) then
        write(*, *) 'The method converged'
        else
            write(*, *) 'The method did not converge'
    end if

    contains

    function f_x(x)
        real f_x, x
        f_x = x**3 + x - 3
    end function f_x

    function f_deriv_x(x)
        real f_deriv_x, x
        f_deriv_x = 3*x**2 + 1
    end function f_deriv_x
end program rootfinding_newton
