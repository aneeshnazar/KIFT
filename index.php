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

	<body class="Bg(grey-6)"><br>
		<div class="Bd(s,1px) Bdrus(5px) H(1000px) W(630px) M(a) Bgc(grey-5) botbg">
			<div class="botheader">
				<h1 class="Ta(c)">KIFT - Temporary Layout</h1>
			</div>
			<div class="style" type="style" name="style" id="style">
			<?php
				$text = unserialize(file_get_contents('./database/text'));
				$output = $text;
				echo '<br>';
				foreach ($output as $key => $out)
				{
					echo '<div class="usertalk">
						<div class="talk-bubble tri-right round right-top talktextl">User: ' . $output[$key]['msg'] . '</div>
						<img src="https://dhqbrvplips7x.cloudfront.net/webchat/1.0.23/agent-e202505f.png" class="br-100 ba h3 w3 dib" alt="avatar">
						</div>';
					echo '<div class="aitalk">
						<img src="https://camo.githubusercontent.com/bb8cfd28cdd5e2f042db6a02af3882bf561207c6/687474703a2f2f692e696d6775722e636f6d2f504d75365834442e706e67" class="br-100 ba h3 w3 dib" alt="avatar">
						<div class="talk-bubble tri-right round left-top talktextr">AI: ' . $output[$key]['response'] . '</div>
						</div>';
				}
				file_put_contents('./database/text', serialize($text));

			?>
			</div>
			<div class="push Ta(c)">
				<form action="integrate.php">
					<input class="Bdrus(10px)" type="text" id="text" name="text" placeholder="Test here" /> 
					<input class="Bdrus(100%)" type="submit" id="submit" name="submit" value="Ask"/>
				</form>
			</div>
		</div>

		<script>
			var scrollbar = document.getElementById("style");
			scrollbar.scrollTop = scrollbar.scrollHeight;
		</script>

	</body>
</html>
