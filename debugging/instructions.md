# CSE111 Final Exam Coding Portion

**105 minutes for 3 questions.**

**40 Points Total**

The coding portion of the exam will be completed entirely on your laptop.

* Done in partners. Keep your voices low to be respectful of others.
* Each partner submits their own code, laptop required.
* Allowed resources:
    * Personal notes, including digital
    * Resources on Canvas
    * Other Internet resources
    * IDE/text editors such as VS Code, Vim, Notepad++, etc.
    * Terminal applications such as bash, git, g++, make, etc.
* DISallowed resources:
    * Messaging apps (Discord, Slack, Telegram, etc.) You may not message your teammate. If you want to share code, you may only look off their screen, or use GitHub.
    * AI is NOT allowed
    * GitHub Copilot is NOT allowed. Be sure to disable it in advance or you will get a zero on the exam.

## Submitting

You have access to an autograder to verify that your files are (mostly) correct. Submit your work frequently to ensure everything is organized correctly. Please note that your score on the autograder does NOT reflect your final grade.

You will submit **all** your files to GradeScope through a `.zip` file. Be sure to maintain the file hierarchy. To zip from terminal, you can do:

```bash
unzip final_exam_coding_portion.zip -d <working_dir>
cd <working_dir>

# make changes...

zip -r <name.zip> * -x "*.zip"
```

Ensure that all your C++ files are formatted according `clang-format --style=Google`.

## Question 1 - [REDACTED]

## Question 2 - `debugging`

**10 Points**

You are given a broken App. First, read through the code and figure out what it is supposed to do. Then use debugging strategies to figure out where the bugs are. Make minimal changes to the source code to implement your fixes; (only a few lines should be changed). Your fix should work for any inputted integer 0 to 2147483647.

(You may choose to create a CMake file to help you run the debugger through VS Code's CMake extension).

## Question 3 - [REDACTED]
