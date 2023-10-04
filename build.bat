@ECHO OFF
echo Compiling...
mkdir build 2>NUL

echo Compiling activities
for /L %%i in (1,1,8) do (
    echo Compiling Activity %%i
    g++ -o build/a%%i.exe activities/a%%i.cpp
)

echo Compiling tracetables
for /L %%i in (1,1,5) do (
    echo Compiling Trace Table %%i
    g++ -o build/trace%%i.exe tracetables/trace%%i.cpp
)

echo Done.