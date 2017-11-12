<!-- 
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   integrate.php                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlu <mlu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/20 by mlu                        #+#    #+#             */
/*                                                    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */ 
-->

<?php
	session_start();
	$text = unserialize(file_get_contents('./database/text'));
	exec("./voice_interface | ./server > ./database/aitalk");
	$parse = file_get_contents('./database/aitalk');
	$temp['msg'] = split("\n", $parse)[0];
	$temp['response'] = split("\n", $parse)[1];
	//$temp['msg'] =  exec("cat ./database/input");
	// $temp['msg'] = exec("./test/input " . escapeshellarg($_GET['text']) . "");
	//$temp['response'] = xec("cat ./database/output");
	// $temp['msg'] = `./input ` . $_GET['text'] . ``; 
	// $temp['response'] = `./output ` . $temp['msg'] . ``;
	$text[] = $temp;		
	file_put_contents('./database/text', serialize($text));
	header('Location: ./index.php');
?>