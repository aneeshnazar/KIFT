<?php
	session_start();
?>

<!DOCTYPE HTML>
<html>
	<head>
		<title>KIFT</title>

		<script src="https://code.jquery.com/jquery-3.2.1.min.js"
						integrity="sha256-hwg4gsxgFZhOsEEamdOYGBf13FyQuiTwlAQgxVSNgt4="
						crossorigin="anonymous"></script>

		<link rel="stylesheet" type="text/css" href="./style/kift.css">
		<link rel="stylesheet" type="text/css" href="./style/bubble.css">
		<link rel="stylesheet" type="text/css" href="./style/scroll.css">
	</head>

	<body class="Bg(black) Ff(m)"><br>
<!-- 	<div class="Fl(l)"> <img src="./img/animated.gif"> </div> -->
		<div class="D(b) Bd(s,1px) Bdc(#32cd32) Bdrus(5px) H(1000px) W(630px) M(a) botbg">
			<div class="botheader D(b)">
				<h1 class="Ta(c) C(#32cd32) D(b)">KIFT - Temporary Layout</h1>
			</div>
			<div class="style D(b)" type="style" name="style" id="style">
			<?php
				$text = unserialize(file_get_contents('./database/text'));
				$output = $text;
				echo '<br>';
				foreach ($output as $key => $out)
				{
					echo '<div class="usertalk">
						<div class="Bd(s,2px) Bdc(#32cd32) talk-bubble round talktextl C(#32cd32)">User: ' . $output[$key]['msg'] . '</div>
						<img src="./img/user.png" class="Bd(s,2px) Bdc(#32cd32) br-100 ba h3 w3 dib" alt="avatar">
						</div>';
					echo '<div class="aitalk">
						<img src="./img/goodboye.png" class="br-100 ba h3 w3 dib Bd(s,2px) Bdc(#32cd32)" alt="avatar">
						<div class="Bd(s,2px) Bdc(#32cd32) talk-bubble round talktextr C(#32cd32)">AI: ' . $output[$key]['response'] . '</div>
						</div>';
				}
				file_put_contents('./database/text', serialize($text));

			?>
			</div>
			<div class="D(b) push Ta(c)">
				<form action="integrate.php">
					<input class="Bdrus(10px) C(#32cd32)" type="text" id="text" name="text" placeholder="Test here" /> 
					<input class="Bdrus(100%) C(#32cd32)" type="submit" id="submit" name="submit" value="Ask"/>
				</form>
			</div>
		</div>

		<script>
			var scrollbar = document.getElementById("style");
			scrollbar.scrollTop = scrollbar.scrollHeight;
		</script>

	</body>
</html>
