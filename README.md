<h2>atof Function Implementation</h2>
<p>The `atof` function in C programming language converts a string into a floating-point number representation. It stands for "ASCII to float".</p>
ramazan emre erkan adamdır
<h3>Task 1: Custom `myAtof` Function</h3>
<p>In this assignment, you'll implement your own `atof` function:</p>
<pre><code>float myAtof(char* string, char* error)</code></pre>
<p>This function takes two arguments:</p>
<ul>
  <li><code>char* string</code>: The character array containing the number to convert.</li>
  <li><code>char* error</code>: A pointer to a character variable to store an error code (0 for success, 1 for error).</li>
</ul>
<p>The function returns a `float` value representing the converted number.</p>

<ul>
  <li>**Error Handling:** If the character array cannot be converted (contains letters, special characters, etc.), the `error` variable is set to 1, and the function returns 0.0.</li>
  <li>**Error Message:** If an error occurs (conversion fails), an error message should be displayed to the user, indicating invalid input.</li>
</ul>

<h3>Sample Outputs</h3>

<p>Here are some sample outputs demonstrating expected behavior:</p>

<h4>Valid Input:</h4>

<pre><code>Enter a number:
6
Your number is: 6.00
</code></pre>

<h4>Another Valid Input:</h4>

<pre><code>Enter a number:
4.678
Your number is: 4.68
</code></pre>

<h4>Invalid Input:</h4>

<pre><code>Enter a number:
hello
Error has been occurred due to inappropriate input!
</code></pre>


<h2>Task 2: Arithmetic Operations with myAtof</h2>
<p>Building upon your custom myAtof function from Task 1, this part involves extending arithmetic operation evaluation (+, -, *, /) to operate on floating-point numbers.</p>

<h3>User Input and Output Format</h3>
<ul>
<li>The user will enter an expression as a character array.</li>
<li>Valid expressions follow the format: number1 operator number2 (e.g., 1.25 + 12, 0.24 * 3).</li>
<li>The output will display the expression, the result, and an equals sign (=), formatted like this:</li>
<pre><code>number1 operator number2 = result</code></pre>
<li>Numbers will be printed with two-digit precision after the decimal point.</li>
</ul>

<h3>Functionality and Restrictions</h3>
<ul>
<li>You cannot use functions from the String library.</li>
<li>Use gets() to retrieve the operation string from the user.</li>
<li>Remember that the end of input is indicated by the null character (\0).</li>
<li>In case of invalid operations or division by zero, display an appropriate error message.</li>
</ul>

<h3>Sample Outputs</h3>

<p>Here are some sample outputs illustrating the expected behavior:</p>

<h4>Valid Operation:</h4>

<pre><code>Enter aritmetic operation:
+
0.00 + 0.00 = 0.00
</code></pre>

<h4>Another Valid Operation:</h4>

<pre><code>Enter aritmetic operation:
3.7/3
3.70 / 3.0 = 1.23
</code></pre>

<h4>Division by Zero:</h4>

<pre><code>Enter aritmetic operation:
4/0
Cannot divided into 0.
</code></pre>
