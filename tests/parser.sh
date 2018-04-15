#!/bin/bash

source $HOME/.customrc.d/functions.sh

function template() {
cat << EOF
Test(base16, test$1, .init=redirect_all_std)
{
	my_putnbr_base_fd(1, $1, BASE_16);
	cr_assert_stdout_eq_str(\"$(d2h $1 | tr '[:upper:]' '[:lower:]')\");
}
EOF
}

while read x
do
	template $x
done
