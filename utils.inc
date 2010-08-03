<?
function systemln($str) {
    $out = shell_exec($str);
    if(substr($out,-1)!="\n") $out.="\n";
    echo $out;
}
define(GREEN,32);
define(RED,31);
define(BLUE,34);
function color_off() { system("tput sgr0"); }
function color_on($code) { system("echo -n \033[".$code."m"); }
?>