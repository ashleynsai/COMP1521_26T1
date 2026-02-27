	.text
main:
	# Local variables
	# $t0 - int n
	# $t1 - int fac
	# $t2 - int i

	li	$v0, 4
	la	$a0, prompt_1
	syscall				# printf("n = ");

	li	$v0, 5
	syscall		
	move	$t0, $v0		# scanf("%d", &n);

	li	$t1, 1			# int fac = 1

loop_init:
	li	$t2, 1			# int i = 1

loop_cond:
	bgt	$t2, $t0, loop_end
	
loop_body:
	mul	$t1, $t1, $t2

loop_step:
	addi	$t2, $t2, 1
	b	loop_cond

loop_end:
	li	$v0, 4
	la	$a0, prompt_2
	syscall

	li	$v0, 1
	move	$a0, $t1
	syscall

	li	$v0, 11
	li	$a0, '\n'
	syscall

	li	$v0, 0
	jr	$ra

	.data
prompt_1:
	.asciiz	"n = "

prompt_2:
	.asciiz "n! = "