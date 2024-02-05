SOFTWARE ENGINEERING LAB 

Assignment 2 

TOPIC – Exploring GDB commands 

       ******Name Enrollment Number** 

**Ranveer Sahay 2021CSB024** 

**Devans Soni 2021CSB026** 

**M Vamsi Swarup 2021CSB028** 

**Raksha Pahariya 2021CSB029** 

**Anirban Debnath 2021CSB030** 

\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_ 

**Write a short note on GNU debugger(GDB) command in Linux.** 

GNU Debugger (GDB) stands as a robust command-line utility utilized for debugging software applications within Linux and analogous Unix-like operating systems. Its primary function is to assist developers in identifying and rectifying errors within their code. This is achieved through a variety of functionalities, including the establishment of breakpoints, inspection of variables and memory, and the ability to navigate through code execution. 

Typically, GDB operates alongside a compiler such as GCC, enabling the creation of an executable file embedded with debugging symbols. These symbols facilitate the loading of the program into the debugger. Once operational within GDB, developers gain access to an array of commands for scrutinizing and altering its execution. Such commands encompass the placement of breakpoints at specific code lines, step-by-step traversal of the program, examination of variable contents, and more. 

Notably, GDB extends its support to a diverse spectrum of programming languages, encompassing C, C++, Python, Ada, and others. Moreover, it boasts formidable scripting capabilities, empowering developers to automate repetitive debugging tasks and tailor the debugger's functionality to align with their requirements. 

In summary, GDB emerges as an indispensable asset for software developers immersed in Linux and similar Unix-like environments. Its robust debugging toolkit, coupled with extensive language backing, positions it as an indispensable resource for efficiently and effectively debugging software applications.

**1. Running a program** 

To prepare your program for debugging with gdb, you must compile it with the `-g `flag. To start the program running, one can use the run command. If the program takes command-line arguments, they can be specified after the run command

![](https://lh7-us.googleusercontent.com/O1kys1EzwyC930hhZ4SMsRC-YU8iN6rVFcjOySJWWiHsQoNzhfi3BDWhAw0r-iZv5SajAdJACZlaBBTSYHSSQNHFwEH1Ave1HWZKugbgDDgsABzLk46_eV9uanRguQ160zslbcMfrPKBoolHIi8LJkk)

![](https://lh7-us.googleusercontent.com/unirZhtTaBtzklroMkAI6Jy3aXJiwogofL4nUeKzfzxSeAsrQNcq4STtPiuD0LUDzFqAlleE9QiTtih-c2OexmQXnRmoPikCzEo-UWnbcWXFoWWuVzDmSlCm4DXjlO8M49OLWd7c428Xz5fHNzBxWCM)

**2. Loading symbol table** 

Once the program is compiled with debugging symbols, it can be loaded into GDB using the file ![](https://lh7-us.googleusercontent.com/K6r1eCtHKOudywgWmsnjvujfZPVtwHByAT-YEfVigHjkDrPX0RYBYt2lPVw0oizZnvezUDq2BarFq6g8sngK2kqSkHzYxH6OaAfqwmbnLq4A1Yc7iCZcX8tkr5BxvE1IXZRyduv6zXyjiCIkthmzlr8)

**3. Setting a break-point** 

Normally, your program only stops when it exits. Breakpoints allow you to pause your program's execution wherever you want, be it at a function call or a particular line of code, and examine the program state.

Before you start your program running, you want to set up your breakpoints. The break command (shorthand: b) allows you to do so. 

![](https://lh7-us.googleusercontent.com/_tyaqo6y1Y64EuQBqKYy5IyOkiEDX0_SrwKPX-iFYr7MlH2S9Kf1lWpB0cavvSJGqHbNP-tgtVxiQy4NgIo1FEYzm4lr7O1SrvTFibaVUNX2oPQIkaZPFZjvdd3K4X8cR_yroycW2mFiIt4YOe3yevk)To delete the breakpoint numbered 2: 

(gdb) delete 2 

If you lose track of your breakpoints, or you want to see their numbers again, the info break command lets you know the breakpoint numbers:

![](https://lh7-us.googleusercontent.com/YWKI1Moze-79VfyT71cD6cNy3axn1WVeLEFEhDGeSyOKtCHJC3RggeoHuhtA9PBq4XsAE-yvMJtwM75R1TGROT32hHMQtIaQ2SXGX0hto4cSiWIlTwVMsiv3h0OUp08N6QTj90LuPifHD3A3xQqvpHw)

**4. Listing variables and examining their values **![](https://lh7-us.googleusercontent.com/oVzg7gpcNRtgnCDFG4jVejUw5iUJu8xtdXOXPt3gR6plqZahBDOHlOr66clfA256-H4DI0uli-EI45kr91afWVMcefE_pdUX4vfe_Y4m54CT9XnQ_mlsZwTeyTPM5IGKmXJsm92LTqTWWCPbR3_1h-s)****

**5. Printing content of an array or contiguous memory** 

In GDB, programmers have the capability to display the contents of an array or a contiguous block of memory while the program is running. This functionality proves invaluable for debugging tasks, enabling programmers to scrutinize memory contents and confirm their conformity to expected values. 

To showcase the contents of an array in GDB, the \`print\` command is employed along with the array's name and the desired index range. This index range can be defined using either absolute indices or pointer arithmetic. 

For instance, to reveal the contents of an array named \`my\_array\` with 10 elements in GDB, the following command can be utilized: 

(gdb) print my\_array\[0]@10 

This command displays the first 10 elements of the array, commencing from index 0. In cases of multi-dimensional arrays, the index range for each dimension can be delineated, separated by commas. 

**6. Printing function arguments** 

To display the arguments of a function in GDB, programmers can employ the "info args" command. This command provides a comprehensive list of all arguments transmitted to the ongoing function, along with their respective types and values. 

For instance, to exhibit the arguments of the present function in GDB, one may utilize the following command:

(gdb) info args 

**7. Next, Continue, Set command** 

****![](https://lh7-us.googleusercontent.com/APTBX0gLp5ktt2iaSXfsIx8N9hRV43CuuljvdzLRYZjSRP2HosS01p3PoM40KXjp36u4lXpzbFVllqVyDPG09fKJ5ZKESgxlHCJcl9rvwqqVUH0osWJHPg_p9Nplktj6CsL25NTzvwrBymKL7Ny6Q8c)****The \`next\` command in GDB facilitates executing the subsequent line of code within the program without delving into any function calls. This command proves beneficial for swiftly navigating through a program's execution flow while circumventing the intricacies of function

calls. For instance, to execute the next line of code in GDB, one can invoke the following command: 

\`\`\` 

next 

\`\`\` 

On the other hand, the \`continue\` command serves the purpose of resuming program execution until encountering the subsequent breakpoint or program termination. It aids in restoring normal program flow after halting at a breakpoint. For instance, to resume program execution in GDB, the following command can be utilized: 

\`\`\` 

continue 

\`\`\` 

Furthermore, the \`set\` command in GDB offers the capability to alter variable values or debugger options during the debugging process. This functionality proves advantageous for experimenting with diverse scenarios without necessitating program re-execution. For instance, to assign a value of 10 to a variable named \`my\_var\` in GDB, the ensuing command can be employed: 

\`\`\` 

set variable my\_var = 10 

\`\`\` 

Moreover, the \`set\` command can be leveraged to modify the program's behavior by configuring various options. For instance, the \`set print array\` option dictates how GDB presents array values during debugging. To activate the \`set print array\` option in GDB, the subsequent command can be utilized: 

\`\`\` 

set print array on 

\`\`\` 

By leveraging the \`set\` command, programmers gain the flexibility to adjust program behavior and investigate different scenarios during the debugging phase. This capability empowers them to discern the intricacies of their program's behavior and diagnose errors more effectively.

**8. Single stepping into function**

****![](https://lh7-us.googleusercontent.com/zQjrEMZL-LOBh-2lgmB8pXOhLbz5BLRbGBRJ39KMZQm9Kxca793u9ORQaZdLoiYKR6aRIKXfYNSHmsXYjXwHX188ScFff7eOve-bShwZZijH5teWqaA8NUHV_A2oMVAET1PD5cDf7JxansurUIPAYGI)****

****![](https://lh7-us.googleusercontent.com/bThuZAGAzNRffW4oXN4-34OIRIZQO7mxR12WkC0w15ZNwLQWl3ZlObdw3NDK1cjXOSBQHpLmy_CBzYVXP9TxxZSt2xkYymaf3f8sHRuq-qtMDD6Xjmpiy29z4RuFv_i0E5KxS2wWe-irqWU9csvvdxQ)****In GDB, stepping into a function call necessitates the programmer to initially establish a breakpoint within the function of interest. This can be accomplished by employing the "break" command, followed by specifying the name of the function. 

Subsequently, after setting the breakpoint, the program can be initiated utilizing the "run" command. Upon reaching the designated breakpoint during program execution, the programmer can then utilize the "step" command to proceed into the function call, thereby scrutinizing its internal execution. 

For instance, to delve into the function call at the current breakpoint in GDB, the following command sequence can be utilized: 

(gdb) step

**9. Listing all break point** 

****![](https://lh7-us.googleusercontent.com/Bb136vFDfd-ily14uegCJVn908tkJbI8qo2KE_6GiZ7OpHl7VE8EI74DlbfNEG7wCL1yKriIxTGkEB82nv5OsmTXfKFS_yVduIc-bPy7trY6pzkRrlwfVXJ1uhKxihmRvWl82MN4K2omtaNsHS3BMxk)****To list all the breakpoints we can use the command 

(gdb) info break 

**10. Ignoring a break-point for N occurrence** 

****![](https://lh7-us.googleusercontent.com/1dONSXGi_tA_xtluPZc6cHCFRX1NfB07GYEbCetbrr0DXyZrnSSrCZJbJRW8QhnWkY-pLsMueacVhIH4btnGuE0PCvq9jFff1Ee6bNPQDgG8TYrFO0NCpDblZU4WgwAN0xk4ndwMKiAKAzGJMHjJr8I)****To ignore a breakpoint in GDB, the programmer can use the following command: 

(gdb) ignore \[breakpoint number] \[count]

Where \[breakpoint number] is the number of the breakpoint to be ignored (as listed by the info break command) and \[count] is the number of times the breakpoint should be ignored before stopping at it. 

**11. Enable/disable a break-point** 

In GDB, the commands "enable" and "disable" serve to activate or deactivate breakpoints, respectively. This functionality proves valuable in scenarios where a breakpoint is causing issues or when the programmer prefers to temporarily suspend a breakpoint without deleting it. 

To deactivate a breakpoint in GDB, programmers can utilize the following command structure: disable \[breakpoint number] 

Here, \[breakpoint number] denotes the identifier of the breakpoint intended for deactivation, as enumerated by the "info break" command. For instance, to disable breakpoint number 2 in GDB, the subsequent command can be employed: 

disable 2 

This action temporarily suspends the breakpoint, thereby preventing program interruption at that specific location. 

To reactivate a disabled breakpoint, programmers can utilize the "enable" command, specifying the same breakpoint number: 

enable \[breakpoint number] 

For instance, to restore the functionality of breakpoint number 2 in GDB, the following command can be employed: 

enable 2 

This action restores the breakpoint's functionality, enabling the program to halt at the designated location as usual. 

By employing the "enable" and "disable" commands in GDB, programmers attain enhanced control over their breakpoints, facilitating more efficient debugging processes.

**12. Break condition and Command** 

In GDB, the "breakpoint" command facilitates the establishment of a breakpoint endowed with both a condition and a command. A condition comprises an expression evaluated each time the breakpoint is reached, and the breakpoint only halts program execution if the expression evaluates to true. Meanwhile, a command entails a sequence of GDB commands executed whenever the breakpoint is encountered. 

To configure a breakpoint with a condition and a command in GDB, programmers can adhere to the ensuing syntax: 

\`\`\` 

break \[location] if \[condition] commands \[commands] 

\`\`\` 

Here, \[location] signifies the breakpoint's location, \[condition] represents the condition expression, and \[commands] constitutes the succession of GDB commands to be executed upon breakpoint encounter. 

For instance, to establish a breakpoint at line 10 of the "my\_function" function with a condition stipulating program interruption only if the variable "x" holds a value greater than 5, and to execute a command printing the value of the variable "y" each time the breakpoint is reached, the following command can be employed: 

\`\`\` 

break my\_function.c:10 if x > 5 commands print y 

\`\`\` 

This action configures a breakpoint at line 10 of the "my\_function" function, encompassing the designated condition and command. Whenever the breakpoint is hit and the condition holds true, program execution will pause, and the value of "y" will be printed. 

**13. Examining stack trace** 

In GDB, the "backtrace" or "bt" command serves to inspect the stack trace of the program, illustrating the sequence of function calls leading up to the current program point. 

To scrutinize the stack trace in GDB, programmers can utilize the following command: \`\`\` 

backtrace 

\`\`\` 

Alternatively, the abbreviated version can be used:

\`\`\` 

bt 

\`\`\` 

Executing this command will present the current stack trace of the program, showcasing the function calls in reverse chronological order, with the most recent calls listed first. For instance, when the program is halted at a breakpoint, invoking the "bt" command in GDB will reveal the stack trace up to that specific point. 

Additionally, aside from delineating the function names, the stack trace also provides insights into the file names and line numbers where each function was invoked. This feature proves invaluable for bug tracking and comprehending the program's flow. 

**14. Examining stack trace for multi-threaded program** 

In a multi-threaded program, navigating the stack trace in GDB can be more intricate due to the simultaneous execution of multiple threads. To analyze the stack trace for a specific thread, GDB offers the "thread" command. 

To explore the stack trace for a particular thread in GDB, programmers can execute the following command: 

\`\`\` 

thread \[thread number] 

\`\`\` 

Here, \[thread number] represents the identifier of the thread to be examined. For instance, to investigate the stack trace for thread number 3 in GDB, the following command can be used: 

\`\`\` 

thread 3 

\`\`\` 

This command switches the active thread to thread number 3 and showcases the corresponding stack trace. 

Moreover, apart from scrutinizing the stack trace for a singular thread, GDB furnishes commands to inspect the status and stack traces of all threads within the program. The "info threads" command provides a synopsis of all threads, while the "thread apply" command facilitates the application of a command to all threads. 

For instance, to unveil the stack traces of all threads in the program, the following command can be employed: 

\`\`\`

thread apply all bt 

\`\`\` 

This command applies the "bt" command to all threads, revealing the stack trace for each individual thread. 

By scrutinizing the stack traces of individual threads or all threads within a program, programmers can glean insights into the execution of a multi-threaded application and enhance their comprehension of how various threads interact with one another. 

**15. Core file debugging** 

In Linux, when a program crashes or encounters a fatal error, it often generates a core dump file. This file captures a snapshot of the program's memory state at the time of the crash, facilitating post-mortem debugging using GDB. 

To debug a program using a core dump file in GDB, programmers can utilize the following command: 

\`\`\` 

gdb \[program] \[core dump file] 

\`\`\` 

Here, \[program] refers to the name of the program that produced the core dump file, and \[core dump file] denotes the path to the core dump file. For instance, to debug a program named my\_program using a core dump file named core, one would execute: 

\`\`\` 

gdb my\_program core 

\`\`\` 

This command initiates GDB and loads the core dump file, enabling programmers to examine the program's state at the time of the crash. 

Once the core dump file is loaded into GDB, programmers can employ the standard GDB commands to inspect the program's memory, establish breakpoints, and traverse through the program's execution. 

Utilizing a core dump file for post-mortem debugging empowers programmers to analyze the root cause of a program crash and pinpoint the underlying issues that precipitated the crash. This approach serves as a valuable tool for enhancing the quality and reliability of software.

**16. Debugging of an already running program** 

In GDB, developers have the capability to attach to a running program and conduct debugging while it remains active. This feature proves invaluable for troubleshooting issues that manifest under specific conditions or for debugging lengthy programs that are challenging to replicate. 

To attach GDB to a running program, developers can utilize the following command structure: 

\`\`\` 

gdb \[program] \[process ID] 

\`\`\` 

Here, \[program] denotes the name of the program intended for debugging, while \[process ID] represents the identifier of the running process. For instance, to attach GDB to an active instance of a program named my\_program with a process ID of 1234, one would execute: 

\`\`\` 

gdb my\_program 1234 

\`\`\` 

Once GDB establishes attachment to the running program, developers can employ the standard GDB commands to inspect the program's memory, establish breakpoints, and step through its execution flow. 

However, it's crucial to acknowledge that attaching GDB to a running program carries risks, as it may potentially cause the program to crash or exhibit unpredictable behavior. Therefore, exercising caution during the debugging process is imperative, and having contingency plans in place is advisable in case of unexpected outcomes. 

By leveraging GDB to debug a running program, developers can gain real-time insights into its behavior, enabling them to swiftly identify and rectify bugs as they arise. 

**17. Some more advance concepts based on your interest - for example 'watchpoint’** 

A watchpoint serves as a valuable debugging tool in GDB, allowing developers to track modifications to the value of a designated memory location or variable. When a watchpoint is established, GDB halts program execution and notifies the programmer whenever the monitored memory location or variable undergoes alteration. 

To implement a watchpoint in GDB, developers utilize the following command structure: \`\`\`

watch \[expression] 

\`\`\` 

Here, \[expression] denotes the memory location or variable that the developer intends to monitor. For instance, to establish a watchpoint on a variable named "count," the following command is employed: 

\`\`\` 

watch count 

\`\`\` 

Upon setting the watchpoint, GDB intervenes in the program's execution each time the value of the "count" variable changes. 

Beyond setting a watchpoint on a specific variable or memory location, GDB supports conditional watchpoints, which activate solely when particular conditions are satisfied. For instance, developers can establish a watchpoint triggered exclusively when a variable is altered by a specific function. 

Watchpoints function as potent debugging aids for pinpointing and troubleshooting issues related to memory location or variable modification. Through the utilization of watchpoints, developers can promptly identify instances and locations of variable changes, facilitating the diagnosis of underlying causes for these alterations.

