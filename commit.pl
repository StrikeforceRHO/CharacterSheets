#!/usr/bin/perl

use strict; 

my $pdf;
my $num_args = $#ARGV + 1;
if($num_args eq 1) {
	$pdf = $ARGV[0];
}
else {
	print(STDERR "Arguments needed: full filename of changed file.\n");
	exit 1;
}

open(INPUT, $pdf) or die("Could not find $pdf. Please make sure $pdf is in the current directory.");
close(INPUT);

my $result = system("git pull --rebase origin master ; git add -A . ; git commit -m \"Modifies $pdf after last session\" ; git push origin master");
if(!$result) {
	print("Changes to $pdf committed successfully.\n");
}
else {
	print("Problem encountered when committing changes to $pdf. Please correct the issue and try again.\n");
}
exit 0;
