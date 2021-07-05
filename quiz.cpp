#include <stdio.h>
#include <string.h>
int main() {
    int correct = 0;
    int incorrect = 0;
    //Q1
    char input[30];
    printf("Auf welcher Original Hardware erschien Octopus?\n");
    printf("A. Game and Think\n");
    printf("B. Game and Speak\n");
    printf("C. Game and Watch\n");
    printf("D. Game and Feel\n\n");
    fgets(input, 30, stdin);
    input[strlen(input)-1] = '\0';
    if (strcmp(input,"Game and Watch") == 0|| strcmp(input, "C")== 0) {
        printf("Richtig!\n");
        correct +=1;
    } 
    else{
        printf("Falsch! Richtige Antwort wäre: Game and Watch\n");
        incorrect +=1;
    }
    printf("correct %i\n", correct);
    printf("incorrect %i\n", incorrect);

    //memset(input, 0, sizeof(input));
    
    //Q2
    printf("Wie heißt die Prinzessin, die von Bowser entführt wird?\n");
    printf("A. Apple\n");
    printf("B. Pear\n");
    printf("C. Orange\n");
    printf("D. Peach\n\n");
    fgets(input, 30, stdin);
    input[strlen(input)-1] = '\0';
    if (strcmp(input, "Peach") == 0|| strcmp(input, "D") == 0) {
        printf("Richtig!\n");
        correct +=1;
    }
    else {
        printf("Falsch! Richtige Antwort wäre: Peach\n");
        incorrect +=1;

    }
    printf("correct %i\n", correct);
    printf("incorrect %i\n", incorrect);
    
    //Q3
    printf("Wie heißt die Abkürzung von Original Soundtrack?\n");
    printf("A. OKT\n");
    printf("B. AFK\n");
    printf("C. OST\n");
    printf("D. OFT\n\n");
    fgets(input, 30, stdin);
    input[strlen(input)-1] = '\0';
    if (strcmp(input, "OST") == 0 || strcmp(input, "C") == 0 ) {
        printf("Richtig!\n");
        correct +=1;
    }
    else {
        printf("Falsch! Richtige Antwort wäre: OST\n");
        incorrect +=1;

    }
    printf("correct %i\n", correct);
    printf("incorrect %i\n", incorrect);
    //Q4
    printf("Was beginnt normalerweise am 21. März?\n");
    printf("A. Winter\n");
    printf("B. Herbst\n");
    printf("C. Sommer\n");
    printf("D. Frühling\n\n");
    fgets(input, 30, stdin);
    input[strlen(input)-1] = '\0';
    if (strcmp(input, "Frühling") == 0 || strcmp(input, "D") == 0 ) {
        printf("Richtig!\n");
        correct +=1;
    }
    else {
        printf("Falsch! Richtige Antwort wäre: Frühling\n");
        incorrect +=1;
    }
    printf("correct %i\n", correct);
    printf("incorrect %i\n", incorrect);
    //Q5
    printf("In welchen WIki findet man normalerweise Creepypastas?\n");
    printf("A. Mario Wiki\n");
    printf("B. Nintendo Wiki\n");
    printf("C. GTA Wiki\n");
    printf("D. Creepypasta Wiki\n\n");
    fgets(input, 30, stdin);
    input[strlen(input)-1] = '\0';
    if (strcmp(input,"Creepypasta Wiki") == 0 || strcmp(input, "D") == 0 ) {
        printf("Richtig!\n");
        correct +=1;
    }
    else {
        printf("Falsch! Richtige Antwort wäre: Creepypasta Wiki\n");
        incorrect +=1;
    }
    printf("correct %i\n", correct);
    printf("incorrect %i\n", incorrect);
    //Q6
    printf("Wie lange dauert die Fastenzeit?\n");
    printf("A. 100 Tage\n");
    printf("B. 300 Tage\n");
    printf("C. 40 Tage\n");
    printf("D. 5 Tage\n\n");
    fgets(input, 30, stdin);
    input[strlen(input)-1] = '\0';
    if (strcmp(input, "40 Tage") == 0 || strcmp(input, "C") == 0 ) {
        printf("Richtig!\n");
        correct +=1;
    }
    else {
        printf("Falsch! Richtige Antwort wäre: 40 Tage\n");
        incorrect +=1;
    }
    printf("correct %i\n", correct);
    printf("incorrect %i\n", incorrect);
    //Q7
    printf("Welche Mario Spiele sind für den Betrug bekannt?\n");
    printf("A. Mario RPG (Paper Mario)\n");
    printf("B. Mario Party\n");
    printf("C. Mario Kart\n");
    printf("D. Mario Maker\n\n");
    fgets(input, 30, stdin);
    input[strlen(input)-1] = '\0';
    if (strcmp(input, "Mario Party") == 0 || strcmp(input, "B") == 0 ) {
        printf("Richtig!\n");
        correct +=1;
    }
    else {
        printf("Falsch! Richtige Antwort wäre: Mario Party\n");
        incorrect +=1;
    }
    printf("correct %i\n", correct);
    printf("incorrect %i\n", incorrect);
    //Q8
    printf("Wie heißt das Spiel, wo Peach einen Kuchen gebacken hat?\n");
    printf("A. Super Luigi 64\n");
    printf("B. Luigis Mansion\n");
    printf("C. Super Mario 63\n");
    printf("D. Super Mario 64\n\n");
    fgets(input, 30, stdin);
    input[strlen(input)-1] = '\0';
    if (strcmp(input, "Super Mario 64") == 0 || strcmp(input, "D") == 0 ) {
        printf("Richtig!\n");
        correct +=1;
    }
    else {
        printf("Falsch! Richtige Antwort wäre: Super Mario 64\n");
        incorrect +=1;
    }
    
    //Q9
    printf("Was ist das größte Tier der Welt?\n");
    printf("A. Giraffe\n");
    printf("B. Elefant\n");
    printf("C. Buckelwal\n");
    printf("D. Blauwal\n\n");
    fgets(input, 30, stdin);
    input[strlen(input)-1] = '\0';
    if (strcmp(input, "Buckelwal") == 0 || strcmp(input, "C") == 0 ) {
        printf("Richtig!\n");
        correct +=1;
    }
    else {
        printf("Falsch! Richtige Antwort wäre: Buckelwal\n");
        incorrect +=1;
    }
    printf("correct %i\n", correct);
    printf("incorrect %i\n", incorrect);
}