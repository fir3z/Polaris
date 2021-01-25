/*
* Copyright (c) 2021, Polaris All rights reserved.
*
* THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES,
* INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
* IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY,
* OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS;
* OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
* ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/

#ifndef QUICKBARS_H
#define QUICKBARS_H

#include "peh_plate.h"
#include "sdk_utils.h"
#include "athena_pawn.h"

namespace polaris::inventory
{
    class quickbars
    {
    private:
        int foo = 0;
    public:
        SDK::FGuid* m_pgPickaxe;
        SDK::FGuid* m_pgWallBuild;
        SDK::FGuid* m_pgFloorBuild;
        SDK::FGuid* m_pgStairBuild;
        SDK::FGuid* m_pgRoofBuild;

        void SetupQuickbars(); //!< SetupQuickbars initializes the quickbars.
    };
}

#endif // !QUICKBARS_H
