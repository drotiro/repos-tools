BINDIR=/usr/local/bin
INCDIR=/usr/share/php
COMPDIR=/etc/bash_completion.d
TOOLS=repost repost-backup
SCRIPTS=repos-tools

install:
	install    $(TOOLS)   $(BINDIR)
	install -d $(INCDIR)
	cp      -a $(SCRIPTS) $(INCDIR)

install-completion:
	[ -d "$(COMPDIR)" ] && cp example.bash_completion "$(COMPDIR)/repos-tools"

all: install install-completion
