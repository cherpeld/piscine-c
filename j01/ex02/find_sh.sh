find . -name "*.sh" -type f -print | rev | cut -c4- | cut -d / -f1 | rev
