# Learn C Basics Repository 💻

A structured collection of C programming practice code, basic syntax tutorials, data structures, and system file manipulation scripts designed to build a strong foundation in procedural programming.

---

## 📂 Repository Structure

```text
Learn-C-Basics/
│
├── PartOne/
│   ├── main.c                  # Core primary application file
│   └── file.txt                # Sample text asset for file I/O
│
├── PracticeOne/                # Fundamental C concepts & core syntax
│   ├── arithmetic_one.c        # Basic mathematical operations
│   ├── console_intput.c        # Standard input/output handling (`scanf`/`printf`)
│   ├── data_types.c            # Primitive data types exploration
│   ├── define_o.c              # Preprocessor macro definitions (`#define`)
│   ├── do_loop.c               # Do-while iteration structures
│   ├── func_force.c            # Custom function definitions and calls
│   ├── game_path.c             # Conditional path-branching logic
│   ├── if_safe.c               # Conditional control flow (`if-else`)
│   ├── int_array.c             # Single-dimensional arrays
│   ├── loop.c                  # For and while loops
│   ├── multid_array.c          # Multi-dimensional arrays (matrices)
│   ├── pointer.c               # Pointer addressing and memory references
│   ├── prgram_one.c            # General syntax practice
│   ├── struct_one.c            # Introduction to structures (`struct`)
│   ├── struct_two.c            # Advanced structure examples
│   └── user_inputs.c           # Interactive user input routines
│
└── PracticeTwo/                # Advanced system operations & file handling
    ├── copy_file.c             # Programmatic file copying logic
    ├── copy_folder.c           # Directory/folder copying utilities
    ├── file_info.c             # Extracting file metadata and information
    ├── move_file.c             # Moving files across paths
    ├── reactangle_one.c        # Geometric structure logic
    ├── reading_writing_text.c  # Text stream file I/O operations
    ├── rename_delete_create.c  # File and folder lifecycle management
    ├── run_windows_commands.c  # Executing system commands from C
    ├── struct_practice_one.c   # Structural data practice
    ├── temperature_check.c     # Conditional metric evaluation script
    └── windows_command_output.c # Capturing system command output streams
```
📚 Topics Covered
Fundamentals: Variables, basic data types, arithmetic operations, and preprocessor directives (PracticeOne/).
1. Control Flow: Conditional branching (if-else) and loops (for, while, do-while).
2. Memory Management: Pointers, addresses, and single/multi-dimensional arrays.
3. Complex Data Structures: Custom user-defined structures (struct).
4. System Programming & File I/O: Programmatically creating, reading, writing, copying, and deleting files and folders (PracticeTwo/).
5. OS Automation: Executing operating system shell commands directly from C programs.

⚙️ Compilation and Execution Guide
To build and execute these C programs, make sure you have a C compiler installed, such as GCC (GNU Compiler Collection) or MinGW on Windows.

🖥️ Windows (Command Prompt / PowerShell)
Compile a file:
Use gcc to compile your target source file into an executable.

```DOS
gcc -o program_name folder_name/file_name.c
```
Example:

```DOS
gcc -o console_intput PracticeOne/console_intput.c
```
Run the compiled executable:

```DOS
.\console_intput.exe
```
🐧 Linux / macOS (Terminal)
Compile a file:
Use gcc with standard flags to compile the source file.

```Bash
gcc -std=c99 -o program_name folder_name/file_name.c
```
Example:

```Bash
gcc -std=c99 -o console_intput PracticeOne/console_intput.c
```
Run the compiled executable:

```Bash
./console_intput
```
