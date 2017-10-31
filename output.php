	<?php
	function test(){
		$test = `./test`; // Takes the output of the program test and stores the entire stdout
		exec("./test", $array); // Does the same thing, but it's now in an array form
		echo $test;
		echo '<br>';
		foreach ($array as $out)
			echo $out;
	}

	?>