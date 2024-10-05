program main
    implicit none

    real:: score
    print*, 'Enter your score: '
    read*, score
    if(score >= 93) then
        write(*,*) 'Your grade is A'
    else if(score >= 90) then
        write(*,*) 'Your grade is A-'
    else if(score >= 87) then
        write(*,*) 'Your grade is B+'
    else if(score >= 83) then
        write(*,*) 'Your grade is B'
    end if

end program main


