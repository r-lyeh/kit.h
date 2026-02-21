if "%1"=="tidy" del *.exe *.obj *.ilk *.pdb *.dll *.ini & exit /b
if "%1"=="push" call %0 tidy & (git add -Af . && git commit --amend && git push -f) & exit /b
if "%1"=="imgui" cl /experimental:c11atomics /std:c11 kit_imgui.cc docs\3rd\wgvk\src\wgvk.c docs\3rd\imgui\backends\imgui_impl_glfw.cpp docs\3rd\imgui\examples\example_glfw_wgpu\main.cpp docs\3rd\glfw3\glfw.c -I docs\3rd\imgui -I docs\3rd\wgvk\include -I docs\3rd\imgui\backends -I docs\3rd\glfw3\include -DIMGUI_IMPL_WEBGPU_BACKEND_WGVK -D_GLFW_WIN32 /nologo /MP & exit /b
cl test.c kit*.c -I docs\3rd /MP %*
