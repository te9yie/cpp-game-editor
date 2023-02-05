#pragma once

namespace t9::framework {

struct Context {
  bool show_demo = false;
  bool on_quit = false;
};

void begin_frame(Context* ctx);
void end_frame(Context* ctx);

void run(Context* ctx);

}  // namespace t9::framework