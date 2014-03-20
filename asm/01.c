Micron
Q7:
Use ASM language (or any psaudo-code that you are familiar with), to implement
the following statement a*8184

A1: Optimize level == 2
rsb r0, r0, r0, lsl #10
lsls  r0, r0, #3

A2: Default Optimize level
push  {r7}
sub sp, #12
add r7, sp, #0
str r0, [r7, #4]
ldr r2, [r7, #4]
mov r3, r2
mov.w r3, r3, lsl #10
subs  r3, r3, r2
mov.w r3, r3, lsl #3
mov r0, r3
add.w r7, r7, #12
mov sp, r7
pop {r7}
bx  lr
nop

Reference1:
arm-linux-gnueabi-gcc -S
arm-linux-objdump -alD

Reference2:
原创】Android系统shellcode编写
http://bbs.pediy.com/showthread.php?p=1100847
The GNU Assembler
http://tigcc.ticalc.org/doc/gnuasm.html

arm指令==> LSLS的定义
http://blog.csdn.net/l_thread/article/details/6398855

ARM中RSB的用处
http://hi.baidu.com/shengjiuyan/item/8d5dd455caee37ce9f2667b3
<pre>
RSB指令称为逆向减法指令，用于把操作数2减去操作数1，并将结果存放到目的寄存器中。操作数1应是一个寄存器，操作数2可以是一个寄存器，也可以是被移位的寄存器，或一个立即数。该指令可用于有符号数或无符号数的减法运算。例如，指令段RSB R0,R0,R0,LSL #n ; R0=R0*(2**n)-R0=R0*(2**n-1)
</pre>
