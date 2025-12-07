# Automatic Teller Machine

A simple command-line ATM simulator written in C. The interface is presented in Indonesian and models common ATM flows such as quick withdrawals, transfers, deposits, and PIN/phone updates using data persisted in text files.

## Project structure
- `Automatic_Teller_Machine.c`: Main ATM logic, menus, and transaction handling.
- `user.txt`: List of PINs used to authenticate customers (first 30 entries are read).
- `account.txt`: Bank account numbers mapped by index to each PIN.
- `balance.txt`: Account balances aligned with the same indices as the PINs and account numbers.
- `num.txt`: Phone numbers (strings) aligned with each account entry.

All files are expected to live in the same directory as the executable. The program rewrites the text files after each session, so they persist any changes made during a run.

## Features
- **Login by PIN**: Prompts for a PIN and searches for a match in `user.txt`. On success, the main menu is displayed; otherwise, the user is prompted again.【F:Automatic_Teller_Machine.c†L85-L118】【F:Automatic_Teller_Machine.c†L495-L505】
- **Quick withdrawals**: Fixed amounts of 250,000; 500,000; or 1,000,000 with denomination selection of 50,000 or 100,000. Balances are reduced accordingly and users can choose to continue or exit.【F:Automatic_Teller_Machine.c†L123-L218】
- **Custom withdrawals**: Allows entering any amount up to 2,500,000 before selecting the bill denomination, then deducts the chosen amount from the current balance.【F:Automatic_Teller_Machine.c†L219-L262】
- **Deposits**: Simulates inserting cash with on-screen reminders, then offers account type options. For savings deposits (`2`), a random multiple of 50,000 up to 5,000,000 is added to the balance; the other option only displays the amount.【F:Automatic_Teller_Machine.c†L20-L41】【F:Automatic_Teller_Machine.c†L263-L314】
- **Transfers and other services** (accessible from option 6):
  - Transfer to the same bank validates the destination account against `account.txt` and transfers funds between balances stored in memory before persisting to file.【F:Automatic_Teller_Machine.c†L320-L390】
  - Transfer to another bank only debits the sender’s balance.【F:Automatic_Teller_Machine.c†L391-L432】
  - Balance inquiry, PIN change, phone-number update, and returning to the previous menu are also supported.【F:Automatic_Teller_Machine.c†L433-L488】
- **Persistence**: At the end of each loop, updated PINs, account numbers, balances, and phone numbers are written back to their respective text files.【F:Automatic_Teller_Machine.c†L507-L538】

## Building and running
This code targets a Windows console environment because it relies on `conio.h`, `getch()`, and `system("cls")/system("color")`. To run it:

1. Install a Windows-compatible C compiler (e.g., MinGW-w64).
2. Ensure the four data files (`user.txt`, `account.txt`, `balance.txt`, `num.txt`) are present in the same folder as the source.
3. Compile and link:
   ```bash
   gcc Automatic_Teller_Machine.c -o atm.exe
   ```
4. Run the resulting executable from a terminal in that folder so it can read and update the text files.

> **Note:** The program reads up to 30 entries from each data file and expects the lists to remain aligned by index. Keep backups of the text files if you want to restore initial data between runs.

## Usage flow
1. Launch the executable and enter one of the PINs from `user.txt` when prompted.
2. Choose a menu option:
   - 1–3: Quick withdrawal amounts.
   - 4: Custom withdrawal.
   - 5: Cash deposit.
   - 6: Other services (transfers, balance check, PIN change, phone update, or return).
3. Follow on-screen prompts to confirm denomination choices and whether to continue after each transaction.

## Limitations
- Input is minimally validated; incorrect menu selections often restart the current step.
- No concurrency controls are present—only one user should run the program at a time to avoid conflicting file writes.
- The UI and currency formatting are tailored to Indonesian Rupiah conventions.
