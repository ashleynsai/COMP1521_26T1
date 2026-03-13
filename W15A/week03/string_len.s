
main:
	# Local variables
	# $t0 - char *string
	# $t1 - char *s
	# $t2 - int length
	# $t3 - *s

loop_init:
	li	$t2, 0
	la	$t1, string
loop_cond:
	# if value in s is equal to terminator, go loop end
	lb	$t3, ($t1)
	beq	$t3, '\0', loop_end 

loop_body:
	addi	$t2, $t2, 1
	addi	$t1, $t1, 1

loop_step:
	b	loop_cond
loop_end:
	jr	$ra

	.data
string:		.asciiz	"...."