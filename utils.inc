<?
function systemln($str) {
    $out = shell_exec($str);
    if(substr($out,-1)!="\n") $out.="\n";
    echo $out;
}
define(GREEN,2);
define(RED,1);
define(YELLOW,3);
define(BLUE,4);
function color_off() { system("tput sgr0"); }
function color_on($code) { system("tput setaf $code"); }
?>