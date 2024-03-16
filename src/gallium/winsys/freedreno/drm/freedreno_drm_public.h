
#ifndef __FREEDRENO_DRM_PUBLIC_H__
#define __FREEDRENO_DRM_PUBLIC_H__

struct pipe_screen;
struct renderonly;

struct pipe_screen *fd_drm_screen_create(int drmFD,
   const struct pipe_screen_config *config,
   struct renderonly *ro);

#endif
