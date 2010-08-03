<?
	include('php-github-api/lib/phpGitHubApi.php');
	$gh = new phpGitHubApi();
	$gh_user = substr(shell_exec("git config github.user"),0,-1);
	$gh_token = shell_exec("git config github.token");
	try {
		$gh->authenticate($gk_user, $gk_token);
	} catch (Excption $ex) {
		die("Unable to authenticate to github as $gh_user\n");
	}
?>
