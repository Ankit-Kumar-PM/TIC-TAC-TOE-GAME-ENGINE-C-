# 🎮 Terminal Tic-Tac-Toe (My First C++ Project!)

Hey there! I am a computer science student, and this is the very first actual project I have ever built. I wrote this entire program from scratch after learning C++ for just 5 days straight. Instead of just doing boring textbook exercises, I wanted to try building a real working game to see if I could actually pull it off. 

It is a completely text-based, two-player Tic-Tac-Toe game that runs directly inside your computer terminal. Writing this code was a massive milestone for me because it forced me to figure out how to structure a program using objects instead of just writing everything in one giant `main()` function.

---

## ✨ Features

* **Custom Usernames:** You can type in your actual names instead of just being Player A or Player B.
* **Smart Token Assigning:** Player 1 picks their preferred icon ('X' or 'O'), and the program automatically gives the remaining icon to Player 2.
* **Dynamic Grid Render:** It draws a fresh 3x3 game board in the console every time someone takes a turn.
* **Basic Error Checking:** It tries to stop you if you try to pick a number that isn't on the board or if you try to steal a spot that someone else already took.
* **Shortcut Keys:** You can quickly reset the game loop or completely quit out of the application right from the character selection screen.

---

## 🧠 What I Learned (The Hard Way)

Because I only had under a week of coding knowledge under my belt when I sat down to write this, I ran into a ton of walls. Building this taught me:
* How to actually use **C++ Classes** and public/private access modifiers without breaking my code.
* Tracking data in a grid structure using **2D Arrays** (`char matrix`).
* Using **Switch cases** to route player inputs to the exact right spot on the board.
* Handling conditional fallback logic using nested `if/else` checks.

---

## 💻 How to Get It Running

If you want to pull this code down and try running it yourself, you just need a standard C++ compiler installed on your computer.

1. **Grab the repository:**
   ```bash
   git clone https://github.com
   ```
2. **Navigate to the directory:**
   ```bash
   cd your-repo-name
   ```
3. **Build the executable:**
   ```bash
   g++ main.cpp -o tictactoe
   ```
4. **Launch the game:**
   ```bash
   ./tictactoe
   ```

---

## 🛠️ Known Issues & Future Fixes (Beginner's Corner!)

Look, I know this code is far from perfect! Since it was my Day 5 milestone, there are a few bugs and messy areas I left in on purpose to remind me of where I started. If you are looking through my code, you might notice:
* **The Input Bug:** In `selmark()`, I wrote `cin >> p1, p2;`. I learned later that the comma operator doesn't work the way I thought it did for streaming inputs!
* **The Infinite Loop Risk:** I used recursion (`move1()` calling `move1()`) to handle invalid inputs, which can crash the stack if someone spams wrong keys. I plan to rewrite this using a `while` loop instead.
* **Incomplete Game Loop:** The snippet uploaded cuts off right at `move2()` and is missing the final winning/tie checking conditions. 

*If you are an experienced dev and have some constructive roasting or tips on how I can refactor this cleanly, please open an issue or drop a pull request. I am trying to learn as much as possible!*
