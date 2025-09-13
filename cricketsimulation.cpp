#include<iostream>
#include<windows.h>
#include <cstdlib>
#include<ctime>
using namespace std;

class Player{
    string name;
    int runs;
    
    public:
    void setData(string n){
        name = n;
        runs = 0;
    }
    void bat(){
        int run;
        run = rand()%7;
        runs+=run;
        auto celebrate = [&]() {
            if (run ==4){
                cout << name << " hits a Four!\n";
            } else if (run==6){
                cout << name << " hits a Six!\n";
            }
        };
    }
    int getRuns(){
        return runs;
    }
    string getName(){
        return name;
    }
};
class Team{
    string teamName;
    Player players[3];
    int totalRuns;

    public:
    void setTeam(string tName, string p1, string p2, string p3){
        teamName = tName;
        string playersNames[3] = {p1, p2, p3};
        for(int i=0; i<3; i++){
            players[i].setData(playersNames[i]);
        }
        totalRuns = 0;
    }
    void play(){
        for(int i=0; i<3; i++){
            players[i].bat();
            totalRuns += players[i].getRuns();
        }
    }
    int getTotalRuns(){
        return totalRuns;
    }
    string getTeamName(){
        return teamName;
    }
    void displayScores(){
        cout << "Scores for " << teamName << ":\n";
        for(int i=0; i<3; i++){
            cout << players[i].getName() << ": " << players[i].getRuns() << " runs\n";
        }
        cout << "Total Runs: " << totalRuns << "\n\n";
    }
};  
int main(){
    srand(time(0)); 

    Team team1, team2;
    team1.setTeam("Team A", "Virat", "Rohit", "Hardik");
    team2.setTeam("Team B", "Ravindra", "Williamson", "Smith");

    team1.play();
    team2.play();

    team1.displayScores();
    team2.displayScores();

    if(team1.getTotalRuns() > team2.getTotalRuns()){
        cout << team1.getTeamName() << " wins!\n";
    } else if(team2.getTotalRuns() > team1.getTotalRuns()){
        cout << team2.getTeamName() << " wins!\n";
    } else {
        cout << "It's a tie!\n";
    }

    system("pause");
    return 0;
}