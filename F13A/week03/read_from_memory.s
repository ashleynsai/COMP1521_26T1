N_SIZE = 10

	.text
main:
	# Local variables
	# $t0 - int i
	# $t1 - array offset

	li	$t0, 0

loop_cond:
	bge	$t0, N_SIZE, loop_end

loop_body:
	# &numbers[i] = numbers + 4 * i
	mul	$t1, $t0, 4
	lw	$t2, numbers($t1)

	li	$v0, 1
	move	$a0, $t2
	syscall			# printf("%d", i);
	
	li	$v0, 11
	li	$a0, '\n'
	syscall			# printf("\n");

loop_step:
	addi	$t0, $t0, 1
	b	loop_cond
	
loop_end:
	jr	$ra			# return;

	.data
numbers:
	.word	99, 88, 77, 66, 55, 44, 33, 22, 11, 0
