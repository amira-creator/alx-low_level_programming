section		.text
	extern	printf
	global	main
main:
	move		edi, msg
	move		eax, 0
	call	printf

section		.data
	msg db 'Hello, Holberton', 0xa, 0
