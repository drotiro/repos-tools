BINDIR=/usr/local/bin
INCDIR=$(BINDIR) # /usr/share/php or some dir in include_path would be better
COMPDIR=/etc/bash_completion.d
TOOLS=github repost
SCRIPTS=php-github-api repos-tools

install:
	cp    $(TOOLS)   $(BINDIR)
	cp -a $(SCRIPTS) $(INCDIR)

install-completion:
	[ -d "$(COMPDIR)" ] && cp example.bash_completion "$(COMPDIR)/repos-tools"

all: install install-completion
