@echo off
set /a x = 0
:begin
set /a x = x + 1
set /a sqr = x * x
set /a res = %sqr% %% 1000
echo %res%,  sqr %x% = %sqr%
if %res% equ 296 (goto end) else (goto begin)


:end
echo %x%