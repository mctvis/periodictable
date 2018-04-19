@echo off
set /a basnet =1
:subash
echo.> %basnet%.txt
set /a basnet = %basnet%+1
if %basnet% LSS 15 goto subash