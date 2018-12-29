echo Starting compile
cl /c /MD nativecode.cpp
cl /clr /LN /MD clrcode.cpp nativecode.obj
csc /target:module /addmodule:clrcode.netmodule Program.cs Properties\AssemblyInfo.cs
link /LTCG /CLRIMAGETYPE:IJW /ENTRY:testcpp.Program.Main /SUBSYSTEM:CONSOLE /ASSEMBLYMODULE:clrcode.netmodule /OUT:InlineASM.exe clrcode.obj nativecode.obj program.netmodule
echo Finished compile. Run with MixedApp.exe