@Echo off
cls
Cd bin
Title Demo StrSurr - Batch-man.com
Echo.
Echo.
Echo. Let's Extract Some [Important] words from this
Echo. Paragraph. And, {Make} use of this (Amazing)
Echo. Utility.
Echo.
Echo. ===============================================
Echo.
StrSurr "[]" "Let's Extract Some [Important] words from this Paragraph. And, {Make} use of this (Amazing) Utility."
StrSurr "{}" "Let's Extract Some [Important] words from this Paragraph. And, {Make} use of this (Amazing) Utility."
StrSurr "()" "Let's Extract Some [Important] words from this Paragraph. And, {Make} use of this (Amazing) Utility."
Echo.
Pause
exit
