# Bug-tracker-project
# Bug Tracker (C++ + SQLite)


A simple console-based bug tracker that allows adding and listing bugs.  
Schema for SQLite is included (`schema.sql`).  

## Features
- Add bugs with title, description, severity.
- Track status (Open/Closed).
- Store bugs in memory (can be extended to SQLite).

## How to Run
```bash
g++ main.cpp -o bugtracker
./bugtracker
```
