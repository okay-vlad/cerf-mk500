#include "../board_context.h"

#include "zune_hd_id.h"
#include "../../core/cerf_emulator.h"

namespace {

class ZuneHdContext : public BoardContext {
public:
    using BoardContext::BoardContext;

    std::string_view GetBoardId() const override { return BoardId::ZuneHd; }
};

}

REGISTER_SERVICE_AS(ZuneHdContext, BoardContext);
