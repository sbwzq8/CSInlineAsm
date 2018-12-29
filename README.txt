##################################
 Inline Assembly example from C#
##################################
This is an example on how to run 
Assembly with C#. C# as well as 
.NET do not have the ability to 
call native cpp code since they 
run on the Common Language 
Runtime(CLR) VM. In order to run 
Assembly from C#, C# must make a 
call to CLI cpp and the CLI then 
calls the native cpp. The assembly 
within the native cpp will run and 
a result can be returned in the 
form of a pointer to the result 
in memory.

##################################
            How to run            
##################################
Do not run this from Visual Studios
VS does not have native tools to
link this project. The compile.bat 
file contains the commands to
compile the code and properly link
into an exe. Once run this example
can be executed in cmd with
InlineASM.exe