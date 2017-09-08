/*
                                PROBLEM
                            ---------------
   In MacMillan Primary School, first terminal, second terminal and final examination is held.All exams are of 100 marks.The
   final result is prepared by taking 25% of the marks obtained from first term exam, 25% of the second term-
   exam, and taking 50% of the final exam.Now, write a program for the mathematics teacher of the school to
   figure out the final result of roll 1-10.Here are their marks:

   Roll No. 1:FT:100,ST:93, Final:87
   Roll No. 2:FT:86, ST:92, Final:64
   Roll No. 3:FT:97, ST:89, Final:80
   Roll No. 4:FT:95, ST:90, Final:91
   Roll No. 5:FT:79, ST:68, Final:46
   Roll No. 6:FT:82, ST:88, Final:58
   Roll No. 7:FT:72, ST:36, Final:73
   Roll No. 8:FT:65, ST:59, Final:85
   Roll No. 9:FT:99, ST:77, Final:96
   Roll No.10:FT:50, ST:98, Final:33
                                                                                Source: CPBOOK_SUBEEN
*/

#include <stdio.h>

int main()
{
    int ft_marks[10]={100,86,97,95,79,82,72,65,99,50},          // MARKS DECLARED---FT
        st_marks[10]={93,92,89,90,68,88,36,59,77,98},          // MARKS DECLARED----ST
        final_marks[10]={87,64,80,91,46,58,73,85,96,33};      // MARKS DECLARED--FINAL

    int i;
    double total_marks[10];

    for(i=0;i<10;i++) {

        total_marks[i]=ft_marks[i]/4.0+st_marks[i]/4.0+final_marks[i]/2.0;
    }

    for(i=1;i<=10;i++) {

        printf("Roll No.: %d\tTotal marks:%0.0lf\n", i, total_marks[i-1]);
    }

    return 0;
}
