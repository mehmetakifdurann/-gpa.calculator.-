//This program is calculating 8 lessons note from their exam notes and lectures credit, After that it calculates your general avarage grade and gives you the half grade of your semester grade.

#include <stdio.h>

int main (void) {
    //for the calculations we need grades and credits per lesson so we are defining them
    
    int grade1, grade2, grade3, grade4, grade5 = 0, grade6, grade7 ,grade8 ;
    float credit1, credit2, credit3, credit4, credit5, credit6, credit7, credit8, semGpa;
    
    
    //printing message and taking inputs
    
    printf("Please enter your first lecture and the lectures credit \n ");
    scanf("%d %f", &grade1, &credit1);
    
    printf("Please enter your second lecture and the lectures credit \n ");
    scanf("%d %f", &grade2, &credit2);
    
    printf("Please enter your third lecture and the lectures credit \n ");
    scanf("%d %f", &grade3, &credit3);
    
    printf("Please enter your fourth lecture and the lectures credit \n ");
    scanf("%d %f", &grade4, &credit4);
    
    printf("Please enter your fifth lecture and the lectures credit \n ");
    scanf("%d %f", &grade5, &credit5);
    
    printf("Please enter your sixth lecture and the lectures credit \n ");
    scanf("%d %f", &grade6, &credit6);
    
    printf("Please enter your seventh lecture and the lectures credit \n ");
    scanf("%d %f", &grade7, &credit7);
    
    printf("Please enter your eighth lecture and the lectures credit \n ");
    scanf("%d %f", &grade8, &credit8);
    
    
    //calculating the grades
    //the formula is : (aGrade x aCredit) + (bGrade+ bCredit).... / total credit
    
    semGpa = ((grade1 * credit1) + (grade2 * credit2) + (grade3 * credit3) + (grade4 * credit4) + (grade5 * credit5) + (grade6 * credit6) + (grade7 * credit7) + (grade8 * credit8)) / (credit1 + credit2 + credit3 + credit4 + credit5 + credit6 + credit7 + credit8);

    /*
     Letter grades:
            100< semGpa : ERROR: YOU HAVE ENTERED WRONG NUMBERS
            90 <= A <= 100
            80 <= B < 90
            70 <= C < 80
            50 <= D  <70
             F < 50
      */
    
    //printing the grade:
    
    printf("Your total grade is : %f ", semGpa);
    
    
    // printing the grade:
      printf("Your total grade is : %f\n", semGpa);

    if (semGpa >= 90) {
      printf("Well done, your grade letter is A\n");
    } else if (semGpa >= 80) {
      printf("Your grade letter is B\n");
    } else if (semGpa >= 70) {
      printf("Your grade letter is C\n");
    } else if (semGpa >= 50) {
      printf("Your grade letter is D\n");
    } else {
      printf("You failed this semester with grade F\n");
    }

    
               
    return 0;
}
    

