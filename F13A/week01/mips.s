

main:
	# Local variables
	# $t0 - int x
	# $t1 - int y

	li	$v0, 4
	la	$a0, prompt
	syscall				# printf("Enter a number: ");

	li	$v0, 5
	syscall
	move	$t0, $v0		# scanf("%d", &x);

	mul	$t1, $t0, $t0

	li	$v0, 1
	move	$a0, $t1
	syscall				# printf("%d", y);

	li	$v0, 11
	li	$a0, '\n'
	syscall				# print newline

	li	$v0, 10
	jr	$ra			# return 10


	.data
prompt:		.asciiz	"Enter a number: "