#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

#define MAX_HABITS 10

typedef struct {
    char name[50];
    int targetStreak;
    int currentStreak;
} Habit;

void displayHabitHeader() {
    printf("\n%-20s %-20s %-20s\n", "Habit", "Target Streak", "Current Streak");
}

void displayHabit(Habit habit) {
    printf("%-20s %-20d %-20d\n", habit.name, habit.targetStreak, habit.currentStreak);
}

void displayHabits(Habit habits[], int numHabits) {
    if (numHabits == 0) {
        printf("No habits added yet!\n");
        return;
    }
    displayHabitHeader();
    for (int i = 0; i < numHabits; i++) {
        displayHabit(habits[i]);
    }
}

void updateHabit(Habit* habit, int completedToday) {
    if (completedToday) {
        habit->currentStreak++;
    } else {
        habit->currentStreak = 0;
    }
    printf("Habit streak updated!\n");
}

void motivationalQuote() {
    srand(time(NULL));
    int quote = rand() % 3;

    switch (quote) {
        case 0:
            printf("“The only person you are destined to become is the person you decide to be.” - Ralph Waldo Emerson\n");
            break;
        case 1:
            printf("“Our greatest glory is not in never falling, but in rising every time we fall.” - Nelson Mandela\n");
            break;
        case 2:
            printf("“The difference between ordinary and extraordinary is that little extra.” - Jimmy Johnson\n");
            break;
    }
}

Habit createHabit(char name[], int targetStreak) {
    Habit habit;
    strcpy(habit.name, name);
    habit.targetStreak = targetStreak;
    habit.currentStreak = 0;
    return habit;
}

void createHabitMenu(Habit habits[], int* numHabits) {
    if (*numHabits == MAX_HABITS) {
        printf("Maximum number of habits reached!\n");
        return;
    }
    char name[50];
    int targetStreak;
    printf("Enter habit name: ");
    scanf(" %s", name);
    printf("Enter target streak: ");
    scanf("%d", &targetStreak);
    habits[(*numHabits)++] = createHabit(name, targetStreak);
    printf("Habit added successfully!\n");
}

void updateHabitMenu(Habit habits[], int numHabits) {
    if (numHabits == 0) {
        printf("No habits to update!\n");
        return;
    }
    int choice;
    printf("Select a habit to update:\n");
    for (int i = 0; i < numHabits; i++) {
        printf("%d. %s\n", i + 1, habits[i].name);
    }
    printf("Enter your choice: ");
    scanf("%d", &choice);
    if (choice < 1 || choice > numHabits) {
        printf("Invalid choice!\n");
        return;
    }
    choice--; // Adjust for 0-based indexing
    int completedToday;
    printf("Did you complete %s today? (1 = yes, 0 = no): ", habits[choice].name);
    scanf("%d", &completedToday);
    updateHabit(&habits[choice], completedToday);
}

void displayHabitsMenu(Habit habits[], int numHabits) {
    if (numHabits == 0) {
        printf("No habits added yet!\n");
        return;
    }
    displayHabits(habits, numHabits);
}

void motivationalQuoteMenu() {
    motivationalQuote();
}

int main() {
    Habit habits[MAX_HABITS];
    int numHabits = 0;
    int choice;

    while (1) {
        printf("\nHabit Tracker\n");
        printf("1. Add Habit\n");
        printf("2. Update Habit\n");
        printf("3. Display Habits\n");
        printf("4. Motivational Quote\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                createHabitMenu(habits, &numHabits);
                break;
            case 2:
                updateHabitMenu(habits, numHabits);
                break;
            case 3:
                displayHabitsMenu(habits, numHabits);
                break;
            case 4:
                motivationalQuoteMenu();
                break;
            case 5:
                printf("Exiting...\n");
                return 0;
            default:
                printf("Invalid choice!\n");
        }
    }

    return 0;
}