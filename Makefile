BINDIR=/usr/local/bin
INCDIR=/usr/share/php
COMPDIR=/etc/bash_completion.d
TOOLS=repost repost-backup
SCRIPTS=repos-tools

check:
	@(echo -n " == Checking for php: " && which php) || (echo "missing! Please install the php-cli package"  && exit 1)
	@echo " == Run 'sudo make install' to install"

install:
	install    $(TOOLS)   $(BINDIR)
	install -d $(INCDIR)
	cp      -a $(SCRIPTS) $(INCDIR)

install-completion:
	[ -d "$(COMPDIR)" ] && cp example.bash_completion "$(COMPDIR)/repos-tools"

all: install install-completion
