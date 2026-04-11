#include <stdio.h>
#include <string.h>

#define MAX 100


struct Time {
    int hour;
    int minute;
};


struct TRAIN_INFO {
    int train_no;
    char train_name[50];
    struct Time dep_time;
    struct Time arr_time;
    char start_station[50];
    char end_station[50];
};

struct TRAIN_INFO t[MAX];
int n;


void input() {
    printf("Enter number of trains: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        printf("\nEnter details of train %d:\n", i+1);

        printf("Train No: ");
        scanf("%d", &t[i].train_no);

        printf("Train Name: ");
        scanf("%s", t[i].train_name);

        printf("Departure Time (hour minute): ");
        scanf("%d %d", &t[i].dep_time.hour, &t[i].dep_time.minute);

        printf("Arrival Time (hour minute): ");
        scanf("%d %d", &t[i].arr_time.hour, &t[i].arr_time.minute);

        printf("Start Station: ");
        scanf("%s", t[i].start_station);

        printf("End Station: ");
        scanf("%s", t[i].end_station);
    }
}


void sort() {
    struct TRAIN_INFO temp;
    for(int i = 0; i < n-1; i++) {
        for(int j = i+1; j < n; j++) {
            if(t[i].train_no > t[j].train_no) {
                temp = t[i];
                t[i] = t[j];
                t[j] = temp;
            }
        }
    }
}


void display(struct TRAIN_INFO x) {
    printf("%d %s %02d:%02d %02d:%02d %s %s\n",
        x.train_no, x.train_name,
        x.dep_time.hour, x.dep_time.minute,
        x.arr_time.hour, x.arr_time.minute,
        x.start_station, x.end_station);
}

 1) Trains from a particular station (sorted)
void list_by_station() {
    char station[50];
    printf("Enter start station: ");
    scanf("%s", station);

    sort();

    for(int i = 0; i < n; i++) {
        if(strcmp(t[i].start_station, station) == 0) {
            display(t[i]);
        }
    }
}


void list_by_time() {
    char station[50];
    int h, m;

    printf("Enter station: ");
    scanf("%s", station);

    printf("Enter departure time (hour minute): ");
    scanf("%d %d", &h, &m);

    for(int i = 0; i < n; i++) {
        if(strcmp(t[i].start_station, station) == 0 &&
           t[i].dep_time.hour == h &&
           t[i].dep_time.minute == m) {
            display(t[i]);
        }
    }
}


void list_within_hour() {
    char station[50];
    int h, m, total_input, total_train;

    printf("Enter station: ");
    scanf("%s", station);

    printf("Enter time (hour minute): ");
    scanf("%d %d", &h, &m);

    total_input = h * 60 + m;

    for(int i = 0; i < n; i++) {
        total_train = t[i].dep_time.hour * 60 + t[i].dep_time.minute;

        if(strcmp(t[i].start_station, station) == 0 &&
           total_train >= total_input &&
           total_train <= total_input + 60) {
            display(t[i]);
        }
    }
}


void list_between_stations() {
    char start[50], end[50];

    printf("Enter start station: ");
    scanf("%s", start);

    printf("Enter end station: ");
    scanf("%s", end);

    for(int i = 0; i < n; i++) {
        if(strcmp(t[i].start_station, start) == 0 &&
           strcmp(t[i].end_station, end) == 0) {
            display(t[i]);
        }
    }
}

int main() {
    int choice;

    input();

    do {
        printf("\n1. Trains from a station (sorted)\n");
        printf("2. Trains from station at given time\n");
        printf("3. Trains within next 1 hour\n");
        printf("4. Trains between two stations\n");
        printf("5. Exit\n");

        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1: list_by_station(); break;
            case 2: list_by_time(); break;
            case 3: list_within_hour(); break;
            case 4: list_between_stations(); break;
        }

    } while(choice != 5);

    return 0;
}