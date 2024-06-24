//First Come First Serve
//Implemented by myself
// j rady queue te age aashbe take execute korbe (shobar age)#include<iostream>
#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter How many processes: ";//count the process
    cin >> n;

    int burst_time[n];// Process burst times
    for (int i = 0; i < n; i++) {
        cout << "Enter burst time of process - " << i + 1 << " : ";
        cin >> burst_time[i];
    }

    int waiting_time = 0;
    int total_waiting_time = 0;
    int turnaround_time[n];
    int total_turnaround_time = 0;

    // Store waiting time and calculate turnaround time for each process
    for (int i = 0; i < n; i++) {
        turnaround_time[i] = waiting_time + burst_time[i];
        total_turnaround_time += turnaround_time[i];

        waiting_time += burst_time[i];
        total_waiting_time += waiting_time;
    }

    // Print Gantt chart
    cout << "Gantt Chart:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "| P" << i + 1 << " ";
    }
    cout << "|" << endl;

    // Print the timeline
    int timeline = 0;
    for (int i = 0; i < n; i++) {
        cout << timeline << "\t";
        timeline += burst_time[i];
    }
    cout << timeline << endl;

    // Print waiting time and turnaround time for each process
    for (int i = 0; i < n; i++) {
        cout << "Waiting time of process - " << i + 1 << " : " << total_waiting_time << endl;
        cout << "Turnaround time of process - " << i + 1 << " : " << turnaround_time[i] << endl;
    }

    // Print average waiting time and average turnaround time
    cout << "Average waiting time: " << (total_waiting_time) / float(n) << endl;
    cout << "Average turnaround time: " << (total_turnaround_time) / float(n) << endl;

    return 0;
}
