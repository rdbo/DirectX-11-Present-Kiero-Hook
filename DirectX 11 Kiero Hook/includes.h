#pragma once
#include <Windows.h>
#include <d3d11.h>
#include <dxgi.h>
#include <D3Dcompiler.h>
#include "kiero/kiero.h"
#include "kiero/minhook/include/MinHook.h"
typedef HRESULT(__fastcall* Present)(IDXGISwapChain*, UINT, UINT);