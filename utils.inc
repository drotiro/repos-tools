<?
function systemln($str) {
    $out = shell_exec($str);
    if(substr($out,-1)!="\n") $out.="\n";
    echo $out;
}
define('GREEN',2);
define('RED',1);
define('YELLOW',3);
define('BLUE',4);
function color_off() { system("tput sgr0"); }
function color_on($code) { system("tput setaf $code"); }
function column($col) {
	echo "\r";
	if($col>0) {
		system("tput cuf $col");
	} else {
		$cols = substr(shell_exec("tput cols"),0,-1);
		system("tput cuf ".($cols+$col));
	}
}

function padto($str, $w) {
	echo "$str";
	column($w);
}

function pad($str, $w) {
	printf("%-$w"."s", $str);
}
?>