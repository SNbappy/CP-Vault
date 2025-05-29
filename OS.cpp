#include <bits/stdc++.h>
using namespace std;

struct Process
{
    int id;
    int arrivalTime;
    int burstTime;
    int waitingTime;
};

bool compareArrival(Process a, Process b)
{
    return a.arrivalTime < b.arrivalTime;
}

int main()
{
    int n;
    cout << "Enter the number of processes: ";
    cin >> n;

    vector<Process> processes(n);

    cout << "Enter arrival time and burst time for each process:\n";
    for (int i = 0; i < n; i++)
    {
        processes[i].id = i + 1;
        cout << "Process " << i + 1 << " Arrival Time: ";
        cin >> processes[i].arrivalTime;
        cout << "Process " << i + 1 << " Burst Time: ";
        cin >> processes[i].burstTime;
    }

    sort(processes.begin(), processes.end(), compareArrival);

    int currentTime = 0;
    for (int i = 0; i < n; i++)
    {
        if (currentTime < processes[i].arrivalTime)
        {
            currentTime = processes[i].arrivalTime;
        }
        processes[i].waitingTime = currentTime - processes[i].arrivalTime;
        currentTime += processes[i].burstTime;
    }

    float totalWaitingTime = 0;
    cout << "\nProcess\tArrival Time\tBurst Time\tWaiting Time\n";
    for (int i = 0; i < n; i++)
    {
        cout << "P" << processes[i].id << "\t"
             << processes[i].arrivalTime << "\t\t"
             << processes[i].burstTime << "\t\t"
             << processes[i].waitingTime << "\n";
        totalWaitingTime += processes[i].waitingTime;
    }

    float averageWaitingTime = totalWaitingTime / n;
    cout << "\nAverage Waiting Time: " << averageWaitingTime << endl;

    return 0;
}
