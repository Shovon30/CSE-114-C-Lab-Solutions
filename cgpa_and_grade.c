#include <stdio.h>
int main() {
    int n, i;
    float marks[100], gpa[100], sum = 0, cgpa;

    printf("number of subjects: \n");
    scanf("%d", &n);

    printf("marks for each subject (out of 100):\n");
    for(i = 0; i < n; i++) {
        scanf("%f", &marks[i]);

        if(marks[i] >= 80)
            gpa[i] = 4.0;
        else if(marks[i] >= 75)
            gpa[i] = 3.75;
        else if(marks[i] >= 70)
            gpa[i] = 3.5;
        else if(marks[i] >= 65)
            gpa[i] = 3.25;
        else if(marks[i] >= 60)
            gpa[i] = 3.0;
        else if(marks[i] >= 55)
            gpa[i] = 2.75;
        else if(marks[i] >= 50)
            gpa[i] = 2.5;
        else if(marks[i] >= 45)
            gpa[i] = 2.25;
        else if(marks[i] >= 40)
            gpa[i] = 2.0;
        else
            gpa[i] = 0.0;

        sum = sum + gpa[i]; 
    }

    cgpa = sum / n;
    printf("CGPA: %.2f\n", cgpa);

    if(cgpa == 4.0)
        printf("Grade: A+\n");
    else if(cgpa >= 3.75)
        printf("Grade: A\n");
    else if(cgpa >= 3.5)
        printf("Grade: A-\n");
    else if(cgpa >= 3.25)
        printf("Grade: B+\n");
    else if(cgpa >= 3.0)
        printf("Grade: B\n");
    else if(cgpa >= 2.75)
        printf("Grade: B-\n");
    else if(cgpa >= 2.5)
        printf("Grade: C+\n");
    else if(cgpa >= 2.25)
        printf("Grade: C\n");
    else if(cgpa >= 2.0)
        printf("Grade: D\n");
    else
        printf("Grade: F\n");

    return 0;
}
