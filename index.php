<!-- 
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.php                                          :+:      :+:    :+:   */
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
	<div clas="M(a)">
		<div class="M(a) animated"> <img src="./img/animated.gif"> </div>
		<div class="animated Bd(s,1px) Bdc(#32cd32) Bdrus(5px) H(1000px) W(630px) M(a) botbg">
			<div class="botheader">
				<p class="Ta(c) C(#32cd32)">
				<span
					font-size="18pt"
					class="txt-rotate"
					data-period="2000"
					data-rotate='[ "I AM GOOD BOYE", "I HAVE UNENDING KNOWLEDGE OF ALL THAT IS GOOD AND EVIL", "ASK ME ANYTHING, FOR I AM GOOD BOYE", "YOUR SOUL FUELS ME, THE GOOD BOYE" ]'>
				</span>
				</p>
			</div>
			<div class="style" type="style" name="style" id="style">
			<?php
				$text = unserialize(file_get_contents('./database/text'));
				$output = $text;
				echo '<br>';
				foreach ($output as $key => $out)
				{
					echo '<div class="usertalk">
						<div class="Bd(s,2px) Bdc(#32cd32) talk-bubble round talktextl C(#32cd32)"><p>USER: ' . $output[$key]['msg'] . '</p></div>
						<img src="./img/user.png" class="Bd(s,2px) Bdc(#32cd32) br-100 ba h3 w3 dib" alt="avatar">
						</div>';
					echo '<div class="aitalk">
						<img src="./img/goodboye.png" class="br-100 ba h3 w3 dib Bd(s,2px) Bdc(#32cd32)" alt="avatar">
						<div class="Bd(s,2px) Bdc(#32cd32) talk-bubble round talktextr C(#32cd32)"><p>AI: ' . $output[$key]['response'] . '</p></div>
						</div>';
				}
				file_put_contents('./database/text', serialize($text));

			?>
			</div>
			<div class="push Ta(c)">
				<form action="./integrate.php">
				<!-- 	<input class="Bdrus(10px) C(#32cd32)" type="text" id="text" name="text" placeholder="Test here" />  -->
					<?php
							echo '<input class="Bdrus(100%) C(#32cd32)" type="submit" name="ask" value="Ask"/>';
					?>
				</form>
			</div>
		</div>
		</div>
		<script>
			var scrollbar = document.getElementById("style");
			scrollbar.scrollTop = scrollbar.scrollHeight;

			var TxtRotate = function(el, toRotate, period)
			{
				this.toRotate = toRotate;
				this.el = el;
				this.loopNum = 0;
				this.period = parseInt(period, 10) || 2000;
				this.txt = '';
				this.tick();
				this.isDeleting = false;
			};

			TxtRotate.prototype.tick = function() 
			{
				var i = this.loopNum % this.toRotate.length;
				var fullTxt = this.toRotate[i];

				if (this.isDeleting)
				{
					this.txt = fullTxt.substring(0, this.txt.length - 1);
				} 
				else
				{
					this.txt = fullTxt.substring(0, this.txt.length + 1);
				}
				this.el.innerHTML = '<span class="wrap">'+this.txt+'</span>';
				var that = this;
				var delta = 300 - Math.random() * 100;
				if (this.isDeleting)
				{ 
					delta /= 2; 
				}
				if (!this.isDeleting && this.txt === fullTxt)
				{
					delta = this.period;
					this.isDeleting = true;
				}
				else if (this.isDeleting && this.txt === '')
				{
					this.isDeleting = false;
					this.loopNum++;
					delta = 500;
				}

				setTimeout(function() 
				{
					that.tick();
				}, delta);
			};

			window.onload = function() 
			{
				var elements = document.getElementsByClassName('txt-rotate');
				for (var i=0; i<elements.length; i++)
				{
					var toRotate = elements[i].getAttribute('data-rotate');
					var period = elements[i].getAttribute('data-period');
					if (toRotate) 
					{
						new TxtRotate(elements[i], JSON.parse(toRotate), period);
					}
				}
				var css = document.createElement("style");
				css.type = "text/css";
				css.innerHTML = ".txt-rotate > .wrap { border-right: 0.08em solid #666 }";
				document.body.appendChild(css);
			};
		</script>

	</body>
</html>
