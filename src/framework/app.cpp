#include "app.h"

namespace t9::framework {

void begin_frame(Context* ctx) { ctx->on_quit = false; }
void end_frame(Context* ctx) {}

void run(Context* ctx) {
  if (ImGui::BeginMainMenuBar()) {
    if (ImGui::BeginMenu("File")) {
      ImGui::Separator();
      if (ImGui::MenuItem("Quit")) {
        ctx->on_quit = true;
      }
      ImGui::EndMenu();
    }
    if (ImGui::BeginMenu("Window")) {
      ImGui::MenuItem("Demo", nullptr, &ctx->show_demo);
      ImGui::EndMenu();
    }
    ImGui::EndMainMenuBar();
  }
}

}  // namespace t9::framework