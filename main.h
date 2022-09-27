/*
 * Copyright (c) 2016 The Chromium OS Authors. All rights reserved.
 * Use of this source code is governed by a BSD-style license that can be
 * found in the LICENSE file.
 */

#ifndef MAIN_H
#define MAIN_H

#define FRECON_RUN_DIR "/run/frecon"
#define FRECON_PID_FILE FRECON_RUN_DIR "/pid"

int main_process_events(uint32_t usec);
bool set_drm_master_relax(void);

typedef struct {
	bool    daemon;
	bool    enable_vts;
	bool    enable_vt1;
	bool    splash_only;
	bool    enable_osc;
	bool    no_login;
	bool    pre_create_vts;
} commandflags_t;

extern commandflags_t command_flags;

#endif
