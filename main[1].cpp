#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

struct Bug {
    int id;
    string title, description, status, severity;
};

vector<Bug> bugs;
int bugCounter = 1;

void addBug(string title, string desc, string severity) {
    Bug b = {bugCounter++, title, desc, "Open", severity};
    bugs.push_back(b);
}

void listBugs() {
    for (auto &b : bugs) {
        cout << "ID: " << b.id << " | " << b.title << " | " << b.status 
             << " | " << b.severity << endl;
    }
}

int main() {
    addBug("Login Crash", "App crashes on login", "High");
    addBug("UI Glitch", "Button misaligned", "Low");
    cout << "Bug Tracker - Current Bugs:" << endl;
    listBugs();
    return 0;
}
