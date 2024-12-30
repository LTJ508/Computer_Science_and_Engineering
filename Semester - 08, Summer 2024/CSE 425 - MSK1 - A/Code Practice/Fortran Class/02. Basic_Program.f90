program main
    implicit none

    real::a, b, total, pi, area, radius
    pi = 3.414
    a = 9
    b = 7
    total = a+b

    print *, 'The total is ' , total
    write(*,*) 'The total is ', total

    radius = 4;
    area = pi * radius ** 2
    print *
    print *, 'The area is ', area

    write(*,*) 'Radius was ', radius

end program main


