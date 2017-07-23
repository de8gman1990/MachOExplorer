//
// Created by qiwei on 2017/3/29.
//

#ifndef MACHOEXPLORER_LOADCOMMAND_LOAD_DYLIB_H
#define MACHOEXPLORER_LOADCOMMAND_LOAD_DYLIB_H

#include "loadcommand.h"

MOEX_NAMESPACE_BEGIN


class LoadCommand_DYLIB : public LoadCommandImpl<dylib_command>{
private:
    std::string dylib_path_;
    std::string dylib_name_;
public:
    const std::string & dylib_name()const{return dylib_name_;}
    const std::string & dylib_path()const{return dylib_path_;}

    void Init(void * offset,NodeContextPtr & ctx)override;

    std::string GetTypeName() override{ return "dylib_command";}
    std::string GetShortCharacteristicDescription()override;
};

MOEX_NAMESPACE_END

#endif //MACHOEXPLORER_LOADCOMMAND_LOAD_DYLIB_H
