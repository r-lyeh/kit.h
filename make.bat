@echo off

if "%1"=="env"  set "path=\prj\tools;%path%" && exit /b
if "%1"=="tidy" del *.exe *.obj *.ilk *.pdb *.dll *.ini *.exp *.lib *.dll 2> nul & exit /b
if "%1"=="push" call %0 tidy & (git add -Af . & git commit --amend && git push -f) & exit /b

set wgvk=backends\3rd\wgvk\src\wgvk.c -I backends\3rd\wgvk\include
set glfw=-D_GLFW_WIN32 backends\3rd\glfw3\glfw.c -I backends\3rd\glfw3\include
set imgui=-DIMGUI_IMPL_WEBGPU_BACKEND_WGVK backends\3rd\imgui\backends\imgui_impl_glfw.cpp -I backends\3rd\imgui -I backends\3rd\imgui\backends
set common=-I. -I backends -I backends\3rd /experimental:c11atomics /std:c11 /Zi /nologo /MP
set cc=cl

rem %cc% test.imgui.glfw.wgpu.cc backends\kit*.c* %imgui% %wgvk% %glfw% %common% %* || exit /b

for /R %%i in (x64\*.dll) do copy /y %%i >nul 2>nul

if "%1"=="" echo make [source.c] && exit /b
cl %* kit*.c* /MP /std:c11 /experimental:c11atomics -I 3rd -I 3rd\webgpu

rem cl canvas_sdl3.cc kit_glfw.c kit_imgui.cc kit_sdl3.c kit_opengl.c -I 3rd 
rem cl canvas_glfw.c  kit_glfw.c kit_imgui.cc kit_sdl3.c kit_opengl.c -I 3rd 

rem cl canvas_gl3_glfw.cc kit*.c* -I 3rd /MP
rem cl canvas_gl3_sdl2.cc kit*.c* -I 3rd /MP
rem cl canvas_gl3_sdl3.cc kit*.c* -I 3rd /MP
rem cl canvas_wgpu_glfw.cc kit*.c* -I 3rd /MP
rem cl canvas_wgpu_sdl2.cc kit*.c* -I 3rd /MP
rem cl canvas_wgpu_sdl3.cc kit*.c* -I 3rd /MP
