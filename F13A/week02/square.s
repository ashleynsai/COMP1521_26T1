	.text
SQUARE_MAX = 46340

main:
	li	$v0, 4
	la	$a0, prompt_1
	syscall			# printf("Enter a number: ");

	li	$v0, 5
	syscall
	move	$t0, $v0	# scanf();

	bgt	$t0, SQUARE_MAX, invalid_input	# if (x > SQUARE_MAX) goto invalid_input;

	b	valid_input	# goto valid_input;

invalid_input:
	li	$v0, 4
	la	$a0, prompt_2
	syscall			# printf("square too big for 32 bits\n");

	b	epilogue

valid_input:
	mul	$t1, $t0, $t0

	li	$v0, 1
	move	$a0, $t1
	syscall			# print("%d", y);

	li	$v0, 11
	li	$a0, '\n'
	syscall

epilogue:
	li	$v0, 0
	jr	$ra		# return 0;

	.data
prompt_1:
	.asciiz	"Enter a number: "
prompt_2:
	.asciiz "square too big for 32 bits\n"