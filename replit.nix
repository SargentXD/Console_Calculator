{ pkgs }: {
	deps = [
		pkgs.gnumake
		pkgs.clang
		pkgs.ccls
		pkgs.gdb
		pkgs.gcc
	];
}