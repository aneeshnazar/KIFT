<?php

session_start();
if (!file_exists('./database')) 
	mkdir("./database");
if (!file_exists('./database/text')) 
	file_put_contents('./database/text', null);

	echo "Database installed";

?>