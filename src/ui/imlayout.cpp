#include "imgui.h"
#include <string>

class ImLayout {
public:
  static void FlexRow(float gap = 0.0f) {
    ImGui::BeginGroup();
    ImGui::SetCursorPos(ImGui::GetCursorPos());
  }

  static void EndFlex() { ImGui::EndGroup(); }

  static void P(float padding) {
    ImGui::Dummy(ImVec2(0.0f, padding));
    ImGui::SameLine();
  }

  static void Gap(float gap) { ImGui::SameLine(0.0f, gap); }

  static void CenterText(const char *text) {
    float width = ImGui::CalcTextSize(text).x;
    ImGui::SetCursorPosX((ImGui::GetWindowSize().x - width) * 0.5f);
    ImGui::Text("%s", text);
  }
};
