N_SIZE = 10	
	
	.text
main:
	# Local variables
	# $t0 - int i
	li	$t0, 0		# i = 0;

loop_init:

loop_cond:	# Ending condition
	blt	$t0, N_SIZE, loop_body
	b	loop_end

loop_body:
	li	$v0, 5
	syscall

	# &numbers[i] = numbers + 4 * i
	mul	$t1, $t0, 4		# $t1 = offset
	sw	$v0, numbers($t1)	# numbers[i] = $v0

loop_step:
	addi	$t0, $t0, 1		# i++;
	b	loop_cond		# goto cond;

loop_end:
	jr	$ra

	.data
numbers:	
	.word	0:10