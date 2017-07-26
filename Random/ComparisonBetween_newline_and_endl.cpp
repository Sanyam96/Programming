// Comparison between newline(\n) and endl

// cout << endl  : Inserts a new line and flushes the stream

// cout << "\n"  : Only inserts a new line.

/*
	cout << endl;
	can be said equivalent to
	cout << ‘\n’ << flush;
*/

/*
	Performance ?
	cout << “\n” seems performance wise better than cout << endl; unless flushing of stream is required.
*/

// Reference Link: https://stackoverflow.com/questions/213907/c-stdendl-vs-n