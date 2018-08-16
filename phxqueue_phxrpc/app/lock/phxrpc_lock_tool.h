/*
Tencent is pleased to support the open source community by making PhxQueue available.
Copyright (C) 2017 THL A29 Limited, a Tencent company. All rights reserved.
Licensed under the BSD 3-Clause License (the "License"); you may not use this file except in compliance with the License. You may obtain a copy of the License at

<https://opensource.org/licenses/BSD-3-Clause>

Unless required by applicable law or agreed to in writing, software distributed under the License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the License for the specific language governing permissions and limitations under the License.
*/



/* phxrpc_lock_tool.h

 Generated by phxrpc_pb2tool from lock.proto

 Please DO NOT edit unless you know exactly what you are doing.

*/

#pragma once

#include <cstdio>


namespace phxrpc {


class OptMap;


}


class LockTool {
  public:
    LockTool();
    virtual ~LockTool();

    virtual int PHXEcho(phxrpc::OptMap &bigmap);

    virtual int GetString(phxrpc::OptMap &bigmap);

    virtual int SetString(phxrpc::OptMap &bigmap);

    virtual int DeleteString(phxrpc::OptMap &bigmap);

    virtual int GetLockInfo(phxrpc::OptMap &bigmap);

    virtual int AcquireLock(phxrpc::OptMap &bigmap);

  public:
    typedef int (LockTool::*ToolFunc_t) (phxrpc::OptMap &);

    typedef struct tagName2Func {
        const char *name;
        LockTool::ToolFunc_t func;
        const char *opt_string;
        const char *usage;
    } Name2Func_t;

    static Name2Func_t *GetName2Func() {
        static Name2Func_t name2func[]{
            { "PHXEcho", &LockTool::PHXEcho, "c:f:vs:", "-s <string>" },
            { "GetString", &LockTool::GetString, "c:f:vt:l:k:", "-t <topic_id> -l <lock_id> -k <key>" },
            { "SetString", &LockTool::SetString, "c:f:vt:l:k:r:s:T:", "-t <topic_id> -l <lock_id> -k <key> -r <version> -s <string> -T <lease_time_ms>" },
            { "DeleteString", &LockTool::DeleteString, "c:f:vt:l:k:r:", "-t <topic_id> -l <lock_id> -k <key> -r <version>" },
            { "GetLockInfo", &LockTool::GetLockInfo, "c:f:vt:l:k:", "-t <topic_id> -l <lock_id> -k <lock_key>" },
            { "AcquireLock", &LockTool::AcquireLock, "c:f:vt:l:k:r:s:T:", "-t <topic_id> -l <lock_id> -k <lock_key> -r <version> -s <client_id> -T <lease_time_ms>" },
            { nullptr, nullptr }
        };

        return name2func;
    };
};

