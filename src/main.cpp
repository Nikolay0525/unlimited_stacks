// unlimited_stacks: Kyubu port of coremaze's Cube-World-Unlimited-Item-Stacks-Mod.
// Replaces cube::Creature::CanCarryMoreItems (0x43E4A0) so that it always answers "yes".
#include "../common.hpp"

namespace {
using CanCarryFn = bool(__fastcall*)(void* self, void* edx, void* item);
CanCarryFn g_next = nullptr;   // not called on purpose: the answer is always true

bool __fastcall can_carry_more(void*, void*, void*) { return true; }
}  // namespace

struct UnlimitedStacks {
    explicit UnlimitedStacks(kyubu::Mod& m) {
        const uintptr_t site = classic::at(m, 0x3E4A0);
        static const uint8_t want[] = {0x55, 0x8B, 0xEC, 0x83, 0xEC, 0x08, 0x8B, 0x45, 0x08};
        if (!classic::expect(m, site, want, sizeof want, "unlimited_stacks")) return;
        KyubuId id = 0;
        const KyubuResult r = m.api()->hook_function(m.handle(), site, reinterpret_cast<void*>(&can_carry_more), 0,
                                                     reinterpret_cast<void**>(&g_next), &id);
        if (r != KY_OK) { m.error("unlimited_stacks: could not hook CanCarryMoreItems (result %d)", static_cast<int>(r)); return; }
        m.info("unlimited_stacks: item stacks are unlimited");
    }
};

KYUBU_MOD("unlimited_stacks", KY_SIDE_CLIENT, UnlimitedStacks)
