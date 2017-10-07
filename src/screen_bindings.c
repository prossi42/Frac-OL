#include "../include/fractol.h"

int		key(int keycode)
{
	if (keycode == 53)
		exit(-1);
	return (0);
}

void	screen_bindings(t_fs *fs)
{
	fs->bind.init = mlx_init();
	fs->bind.wdow = mlx_new_window(fs->bind.init, WINSIZE_X * 2, \
		WINSIZE_Y * 2, "Key Bindings");
    mlx_string_put(fs->bind.init, fs->bind.wdow, 0, 0, 0xFFFFFF, "Salut");
    mlx_hook(fs->bind.wdow, 2, (1L << 0), key, fs);
	mlx_loop(fs->bind.init);
}
