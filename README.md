repos-tools: perform simple tasks on your repositories
======================================================

A couple of utilities to work faster and easier on your code repositories:

* __github__: command line client to github issues, following, watching, etc
* __repost__: push, pull, build and do things on all of your repos, or some of them

They need the PHP cli. github also needs the cURL extension.

github
------

github is a command line client to some of the github's features.

Run it with no arguments to see available options:

    Usage: github <command> [<args>]
    commands:
       activity [<user]     show activity feed for <user> (mine by default)
       clone <repo>         clone a repository
       create <name>        create a public repository
       fork <repo>          fork a repository
       forkc <repo>         fork a repository and clone your copy
       info [<user>]        get info on a github user (on me by default)
       issues (*)           list (lists all open issues) or:
                            {comment|close} <issue #> [<comment>]
       follow <user>        start following an user
       followers [<user>]   list followers of <user> (mine by default)
       news                 show your private feed
       rinfo (*)            info on this repository
       unfollow <user>      stop following an user
       unwatch <repo>       stop watching a repository
       watch <repo>         start watching a repository
       watchers (*)         list watchers
    commands marked with (*) must be run from a working dir.


repost
------

repost is a script to perform simple tasks on your repositories at once.

Run it with no arguments to see available options:

    Usage: repost <action> [<repolist>]
    Actions:
        backup  make a tarball with the project(s) directory
        build   build with make or ant
        diff    show what's changed in your working directories
        list    list repositories
        log     show last commit logs
        pull    pull repositories from origin/parent
        push    push repositories to origin/parent
        status  show statuses
    <repolist> can be one of:
        * all   (the default) apply command to all the repositories
        * this      apply command the the current working directory
        * a comma separated list of repository names and/or types.
          Eg.   repost build repo1,repo2        => builds repositories repo1 and repo2
                repost push git:                => push all Git repositories to origin
    or you can execute any command with 'repost do <repolist> <command>'

Repost reads the configuration from the '.repost' file in your home directory.
The config file contains a list of directories to look for repositories
(Git, Subversion, Bazaar and Mercurial) and an optional set of custom commands
to perform instead of the default ones.

Example .repost file:

    repobase = "/home/me/Projects:/share/workrepos"
    
    #example custom command
    #cmd.status.svn = "svn status --xml"



Copyright and license
---------------------

repos-tools is Copyright (C) 2010 Domenico Rotiroti.

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as
    published by the Free Software Foundation, version 3 of the License.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    A copy of the GNU Lesser General Public License is included in the
    source distribution of this software.