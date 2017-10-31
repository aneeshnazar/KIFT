<?php
	session_start();
	$text = unserialize(file_get_contents('./database/text'));
	$temp['msg'] = exec("./test/input " . escapeshellarg($_GET['text']) . "");
	$temp['response'] = exec("./test/output " . $temp['msg'] . "");
	// $temp['msg'] = `./input ` . $_GET['text'] . ``; 
	// $temp['response'] = `./output ` . $temp['msg'] . ``;
	$text[] = $temp;
	file_put_contents('./database/text', serialize($text));
	header('Location: index.php');
	exit;

?>
