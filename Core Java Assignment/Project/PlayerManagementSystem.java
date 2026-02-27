package com.player.management;

import java.util.*;

class Dob {
    int date;
    String month;
    int year;

    Dob(int d, String m, int y) {
        date = d;
        month = m;
        year = y;
    }
}

class Player {
    int jerseyNo;
    String name;
    int run;
    int wickets;
    int matchesPlayed;
    Dob dob;

    Player(int j, String n, int r, int w, int m, Dob d) {
        jerseyNo = j;
        name = n;
        run = r;
        wickets = w;
        matchesPlayed = m;
        dob = d;
    }
}

public class PlayerManagementSystem {

    static ArrayList<Player> players = new ArrayList<>();
    static Scanner sc = new Scanner(System.in);

    public static void main(String[] args) {

        playerData();

        while (true) {
            System.out.println("\n==== Player Management System ====");
            System.out.println("1. Add Player");
            System.out.println("2. Remove Player");
            System.out.println("3. Search Player");
            System.out.println("4. Update Player");
            System.out.println("5. Display All Players");
            System.out.println("6. Birthday Wish");
            System.out.println("7. Exit");
            System.out.print("Enter choice: ");

            int choice = sc.nextInt();

            switch (choice) {
                case 1: addPlayer(); break;
                case 2: removePlayer(); break;
                case 3: searchPlayer(); break;
                case 4: updatePlayer(); break;
                case 5: displayAllPlayers(); break;
                case 6: birthdayWish(); break;
                case 7:
                    System.out.println("Thank you for using Player Management System");
                    System.exit(0);
                default:
                    System.out.println("Invalid Choice!");
            }
        }
    }

    static void playerData() {
        players.add(new Player(45, "Rohit_Sharma", 7000, 15, 272, new Dob(30, "april", 1987)));
        players.add(new Player(18, "Virat_Kohli", 8618, 4, 266, new Dob(5, "nov", 1988)));
        players.add(new Player(33, "Suryakumar_Yadav", 6500, 10, 150, new Dob(14, "sept", 1990)));
        players.add(new Player(32, "Ishan_Kishan", 4500, 16, 180, new Dob(18, "july", 1998)));
        players.add(new Player(72, "Tilak_Varma", 5500, 17, 180, new Dob(8, "nov", 2002)));
    }

    static void addPlayer() {
        System.out.print("Enter Jersey No: ");
        int jn = sc.nextInt();

        for (Player p : players) {
            if (p.jerseyNo == jn) {
                System.out.println("Jersey number already exists!");
                return;
            }
        }

        System.out.print("Enter Name: ");
        String name = sc.next();
        System.out.print("Enter Runs: ");
        int run = sc.nextInt();
        System.out.print("Enter Wickets: ");
        int wickets = sc.nextInt();
        System.out.print("Enter Matches Played: ");
        int matches = sc.nextInt();
        System.out.print("Enter DOB Date: ");
        int date = sc.nextInt();
        System.out.print("Enter Month: ");
        String month = sc.next();
        System.out.print("Enter Year: ");
        int year = sc.nextInt();

        players.add(new Player(jn, name, run, wickets, matches, new Dob(date, month, year)));
        System.out.println("Player Added Successfully!");
    }

    static void removePlayer() {
        System.out.print("Enter Jersey No: ");
        int jn = sc.nextInt();

        Iterator<Player> it = players.iterator();
        while (it.hasNext()) {
            Player p = it.next();
            if (p.jerseyNo == jn) {
                it.remove();
                System.out.println("Player Removed Successfully!");
                return;
            }
        }
        System.out.println("Player Not Found!");
    }

    static void searchPlayer() {
        System.out.print("Enter Jersey No: ");
        int jn = sc.nextInt();

        for (Player p : players) {
            if (p.jerseyNo == jn) {
                display(p);
                return;
            }
        }
        System.out.println("Player Not Found!");
    }

    static void updatePlayer() {
        System.out.print("Enter Jersey No: ");
        int jn = sc.nextInt();

        for (Player p : players) {
            if (p.jerseyNo == jn) {
                System.out.print("Enter New Runs: ");
                p.run = sc.nextInt();
                System.out.print("Enter New Wickets: ");
                p.wickets = sc.nextInt();
                System.out.println("Player Updated Successfully!");
                return;
            }
        }
        System.out.println("Player Not Found!");
    }

    static void displayAllPlayers() {
        for (Player p : players) {
            display(p);
        }
    }

    static void birthdayWish() {
        System.out.print("Enter Date: ");
        int d = sc.nextInt();
        System.out.print("Enter Month: ");
        String m = sc.next();
        System.out.print("Enter Year: ");
        int y = sc.nextInt();

        boolean found = false;
        for (Player p : players) {
            if (p.dob.date == d && p.dob.month.equalsIgnoreCase(m) && p.dob.year == y) {
                System.out.println("🎉 Today is " + p.name + "'s Birthday 🎂");
                found = true;
            }
        }

        if (!found)
            System.out.println("No one's birthday today.");
    }

    static void display(Player p) {
        System.out.println("----------------------------------");
        System.out.println("Jersey No: " + p.jerseyNo);
        System.out.println("Name: " + p.name);
        System.out.println("Runs: " + p.run);
        System.out.println("Wickets: " + p.wickets);
        System.out.println("Matches Played: " + p.matchesPlayed);
        System.out.println("DOB: " + p.dob.date + "-" + p.dob.month + "-" + p.dob.year);
        System.out.println("----------------------------------");
    }
}