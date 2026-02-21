@for /R %%i in (x64\*.dll) do copy /y %%i >nul 2>nul
cl.exe %* /Zi /MP -I 3rd /std:c11 /experimental:c11atomics /nologo
