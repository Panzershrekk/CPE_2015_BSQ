#!/usr/local/bin/perl -w
## mapgen.pl for mapgen in /home/fossae_t/rendu/CPE_2015_BSQ
## 
## Made by Fossaert Thomas
## Login   <fossae_t@epitech.net>
## 
## Started on  Sun Dec 20 15:10:42 2015 Fossaert Thomas
## Last update Sun Dec 20 15:11:47 2015 Fossaert Thomas
##

#!/usr/bin/perl -w
if ((scalar @ARGV) != 3)
{
    print "program x y density\n";
    exit;
}
my $x = $ARGV[0];
my $y = $ARGV[1];
my $density = $ARGV[2];
my $i = 0;
my $j = 0;
print $y . "\n";
while ($i < $y)
{
    $j = 0;
    while ($j < $x)
    {
	if (int(rand($y)*2) < $density)
	{
	    print "o";
	}
	else
	{
	    print ".";
	}
	$j++;
    }
    print "\n";
    $i++;
}
