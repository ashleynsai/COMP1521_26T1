	.text
main:
	# Local Variables
	# $t0 - int n
	# $t1 - int i
	# $t2 - int fac

	li	$v0, 4
	la	$a0, prompt_1
	syscall

	li	$v0, 5
	syscall
	move	$t0, $v0

	li	$t2, 1

init:
	li	$t1, 1

cond:
	bgt	$t1, $t0, end

body:
	mul	$t2, $t2, $t1

step:
	add	$t1, $t1, 1
	b	cond

end:
	li	$v0, 4
	la	$a0, prompt_2
	syscall

	li	$v0, 1
	move	$a0, $t2
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