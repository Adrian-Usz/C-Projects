#include <stdio.h>





struct person {
	char name[4];
	int health;
};

void printStats(struct person person, struct person* ptr) {
	printf("\n Name: %s | Health: %d", person.name, person.health);
}





int main() {
	int day = 0;
	int daysProgress = 0;
	int daysStopped = 0;

	struct person mainP = { "You", 100};
	struct person* mainPptr = &mainP;
	
	printf("\nYou have to survive until the end of the trail with your family.");
	printf("\nThere is a town every 2 you progress where you can buy supplies.");
	printf("\nEach day, you can progress, go hunting for a chance for food/water or repair any damages.");
	printf("\n\nChoose your difficulty | 1 = Easy | 2 = Normal | 3 = hard");
	int choice;

	scanf_s("%d", &choice);

	printf("You choose: %d for difficulty", choice);

	printStats(mainP, mainPptr);
}