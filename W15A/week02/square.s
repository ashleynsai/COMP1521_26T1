	.text
	# Constants
SQUARE_MAX = 46340
PRINT_STRING = 4
READ_INT = 5

main:
	# Local variables
	# $t0 - int x
	# $t1 - int y

	li	$v0, PRINT_STRING
	la	$a0, prompt_1
	syscall

	li	$v0, READ_INT
	syscall
	move	$t0, $v0			# scanf("%d", &x);

	bgt	$t0, SQUARE_MAX, invalid_number	# if (x > SQUARE_MAX) goto invalid_number;

valid_number:
	mul	$t1, $t0, $t0			# y = x * x

	li	$v0, 1
	move	$a0, $t1
	syscall					# printf("%d", y);

	li	$v0, 11
	li	$a0, '\n'
	syscall 				# printf("\n");

	b	epilogue			# goto epilogue;

invalid_number:	
	li	$v0, PRINT_STRING
	la	$a0, prompt_2
	syscall 				# printf("square too big for 32 bits\n");

epilogue:
	li	$v0, 0
	jr	$ra				# return 0

	.data
prompt_1:
	.asciiz	"Enter a number: "

prompt_2:
	.asciiz "square too big for 32 bits\n"