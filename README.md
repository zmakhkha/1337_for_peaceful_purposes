<h1>Mandatory Part</h1>
<table>
<tr>
			<td>Program name </td>
			<td>libft.a</td>
		</tr>
		<tr>
			<td>Turn in files</td>
			<td>Makefile, libft.h, ft_*.c</td>
		</tr>
		<tr>
			<td>Makefile</td>
			<td>NAME, all, clean, fclean, re</td>
		</tr>
		<tr>
			<td>External functs</td>
			<td>Detailed below</td>
		</tr>
		<tr>
			<td>Description</td>
			<td>Write your own library: a collection of functions
				that will be a useful tool for your cursus.</td>
		</tr>
</table>
	<h2>Technical considerations</h2>
	<ul>
		<li>Declaring global variables is forbidden.</li>
		<li>If you need helper functions to split a more complex function, define them as static
			functions. This way, their scope will be limited to the appropriate file.</li>
		<li>Place all your files at the root of your repository.</li>
		<li>Turning in unused files is forbidden.</li>
		<li>Every .c files must compile with the flags -Wall -Wextra -Werror</li>
		<li>You must use the command ar to create your library. Using the libtool command
			is forbidden.</li>
		<li>Your libft.a has to be created at the root of your repository.</li>
	</ul>
	<h2>Part 1 - Libc functions</h2>
	<p>To begin, you must redo a set of functions from the libc. Your functions will have the
		same prototypes and implement the same behaviors as the originals. They must comply
		with the way they are defined in their man. The only difference will be their names. They
		will begin with the ’ft_’ prefix. For instance, strlen becomes ft_strlen.</p>
	<p>You must write your own function implementing the following original ones. They do
			not require any external functions:</p>
			• isalpha<br>
			• isdigit<br>
			• isalnum<br>
			• isascii<br>
			• isprint<br>
			• strlen<br>
			• memset<br>
			• bzero<br>
			• memcpy<br>
			• memmove<br>
			• strlcpy<br>
			• strlcat<br>
			• toupper<br>
			• tolower<br>
			• strchr<br>
			• strrchr<br>
			• strncmp<br>
			• memchr<br>
			• memcmp<br>
			• strnstr<br>
			• atoi<br>
      <p>In order to implement the two following functions, you will use malloc():<p>
      • calloc<br>
      • strdup<br>
<h2>Part 2 - Additional functions<h2>
<p>In this second part, you must develop a set of functions that are either not in the libc,
or that are part of it but in a different form.<p>
