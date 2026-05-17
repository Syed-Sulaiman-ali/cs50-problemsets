# Mario (Less Comfortable)

A C program that generates a right-aligned pyramid using hashes (`#`) for blocks, mimicking the classic Nintendo Mario Bros. brick structures.

## 🚀 How it Works

The program prompts the user for a pyramid height between 1 and 8 (inclusive). It then calculates the necessary spaces and hashes to print a neat, right-aligned pyramid.

*   **Input Validation:** Re-prompts the user if they enter numbers outside the 1–8 range, text, or negative numbers.
*   **Logic:** Uses nested loops to handle space padding first, followed by hash generation for each row.

## 🛠️ Compilation and Execution

To compile the program, run:
```bash
make mario
```

To execute the program, run:
```bash
./mario
```

### Example Output (Height: 4)

```text
   #
  ##
 ###
####
```

## 🧠 What I Learned

*   Implementing `do-while` loops for bulletproof input validation.
*   Manipulating nested `for` loops to control 2D grid generation.
*   Using formulaic math to determine the relationship between spaces, hashes, and row indexes.
