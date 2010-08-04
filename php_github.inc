<?
	include('php-github-api/lib/phpGitHubApi.php');
	$gh = new phpGitHubApi();
	$gh_user = substr(shell_exec("git config github.user"),0,-1);
	$gh_token = substr(shell_exec("git config github.token"),0,-1);
	if(!$gh_user || !$gh_token) {
		echo "Please configure your github username and token,\n";
		echo "as explained here <http://help.github.com/git-email-settings/>\n";
		exit;
	}
	try {
		$gh->authenticate($gh_user, $gh_token);
		
	} catch (Excption $ex) {
		die("Unable to authenticate to github as $gh_user\n");
	}
?>
