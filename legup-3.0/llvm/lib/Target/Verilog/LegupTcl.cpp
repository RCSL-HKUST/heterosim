//===-- Tcl.cpp - Tcl Parser ------------------------------------*- C++ -*-===//
//
// This file is distributed under the LegUp license. See LICENSE for details.
//
//===----------------------------------------------------------------------===//
//
// This file implements the configuration file tcl parser
//
//===----------------------------------------------------------------------===//

#include "llvm/Support/raw_ostream.h"
#include "LegupTcl.h"
#include "LegupConfig.h"

using namespace llvm;

namespace legup {

// checks if the argument is correct. Returns false if incorrect
bool checkArg(const char *argv[], int argNum, const char* option, char*
        error) {
    assert(argNum > 0);
    if ( strcmp(argv[argNum-1], option) != 0) {
        sprintf(error, "Argument %d is not \"%s\"\n", argNum, option);
        return false;
    }
    return true;
}

bool checkArg2(const char *argv[], int argNum, const char* option, const char*
        option2, char* error) {
    assert(argNum > 0);
    if ( strcmp(argv[argNum-1], option) != 0 && strcmp(argv[argNum-1], option2)
            != 0) {
        sprintf(error, "Argument %d is not \"%s\" or \"%s\"\n", argNum, option,
                option2);
        return false;
    }
    return true;
}

/// set_accelerator_function - tcl command to add an accelerator function
int set_accelerator_function(ClientData clientData, Tcl_Interp *interp, int
        argc, const char *argv[]) {
    if (argc != 2) {
        static char error[] = "wrong # args: should be "
            "\"set_accelerator_function functionName\"";
        interp->result = error;
        return(TCL_ERROR);
    }
    LegupConfig *config = (LegupConfig*)clientData;
    config->addAccelerator(argv[1]);
    return(TCL_OK);
}

/// set_parallel_accelerator_function - tcl command to add a parallel accelerator function (used for OpenMP for Pthreads)
int set_parallel_accelerator_function(ClientData clientData, Tcl_Interp *interp, int
        argc, const char *argv[]) {
    if (argc != 2) {
        static char error[] = "wrong # args: should be "
            "\"set_parallel_accelerator_function parallelfunctionName\"";
        interp->result = error;
        return(TCL_ERROR);
    }
    LegupConfig *config = (LegupConfig*)clientData;
    config->addParallelAccelerator(argv[1]);
    return(TCL_OK);
}

/// These are just placeholders to recognize the tcl commands.
/// The actual work is done in a script (genRAM.pl).
int set_dcache_size(ClientData clientData, Tcl_Interp *interp, int
        argc, const char *argv[]) {
    if (argc != 2) {
        static char error[] = "wrong # args: should be "
            "\"set_dcache_size size(in KB)\"";
        interp->result = error;
        return(TCL_ERROR);
    }
    LegupConfig *config = (LegupConfig*)clientData;
    config->setCacheParameters("dcachesize", atoi(argv[1]));
    return(TCL_OK);
}

int set_dcache_linesize(ClientData clientData, Tcl_Interp *interp, int
        argc, const char *argv[]) {
    if (argc != 2) {
        static char error[] = "wrong # args: should be "
            "\"set_dcache_linesize size(in bytes)\"";
        interp->result = error;
        return(TCL_ERROR);
    }
    LegupConfig *config = (LegupConfig*)clientData;
    config->setCacheParameters("dcachelinesize", atoi(argv[1]));
    return(TCL_OK);
}

int set_dcache_way(ClientData clientData, Tcl_Interp *interp, int
        argc, const char *argv[]) {
    if (argc != 2) {
        static char error[] = "wrong # args: should be "
            "\"set_dcache_way associativity\"";
        interp->result = error;
        return(TCL_ERROR);
    }
    LegupConfig *config = (LegupConfig*)clientData;
    config->setCacheParameters("dcacheway", atoi(argv[1]));
    return(TCL_OK);
}

int set_icache_size(ClientData clientData, Tcl_Interp *interp, int
        argc, const char *argv[]) {
    if (argc != 2) {
        static char error[] = "wrong # args: should be "
            "\"set_icache_size size(in KB)\"";
        interp->result = error;
        return(TCL_ERROR);
    }
    LegupConfig *config = (LegupConfig*)clientData;
    config->setCacheParameters("icachesize", atoi(argv[1]));
    return(TCL_OK);
}

int set_icache_linesize(ClientData clientData, Tcl_Interp *interp, int
        argc, const char *argv[]) {
    if (argc != 2) {
        static char error[] = "wrong # args: should be "
            "\"set_icache_linesize size(in bytes)\"";
        interp->result = error;
        return(TCL_ERROR);
    }
    LegupConfig *config = (LegupConfig*)clientData;
    config->setCacheParameters("icachelinesize", atoi(argv[1]));
    return(TCL_OK);
}

int set_icache_way(ClientData clientData, Tcl_Interp *interp, int
        argc, const char *argv[]) {
    if (argc != 2) {
        static char error[] = "wrong # args: should be "
            "\"set_icache_way associativity\"";
        interp->result = error;
        return(TCL_ERROR);
    }
    LegupConfig *config = (LegupConfig*)clientData;
    config->setCacheParameters("icacheway", atoi(argv[1]));
    return(TCL_OK);
}

int set_dcache_ports(ClientData clientData, Tcl_Interp *interp, int
        argc, const char *argv[]) {
    if (argc != 2) {
        static char error[] = "wrong # args: should be "
            "\"set_dcache_ports number\"";
        interp->result = error;
        return(TCL_ERROR);
    }
    LegupConfig *config = (LegupConfig*)clientData;
	config->setCacheParameters("dcacheports", atoi(argv[1]));
    return(TCL_OK);
}

int set_dcache_type(ClientData clientData, Tcl_Interp *interp, int
        argc, const char *argv[]) {
    if (argc != 2) {
        static char error[] = "wrong # args: should be "
            "\"set_dcache_type LVT/MP\"";
        interp->result = error;
        return(TCL_ERROR);
    }
    LegupConfig *config = (LegupConfig*)clientData;
	config->setDCacheType(argv[1]);
    return(TCL_OK);
}

/// set_operation_attributes - tcl command to add hardware operation data
int set_operation_attributes(ClientData clientData, Tcl_Interp *interp, int
        argc, const char *argv[]) {
    static char error[100];
    if (argc != 21) {
        sprintf(error, "%s", "Expecting 21 arguments.");
        interp->result = error;
        return(TCL_ERROR);
    }
    LegupConfig *config = (LegupConfig*)clientData;

    // check arguments are correct
    if (!checkArg(argv, 2, "-Name", error) ||
        !checkArg(argv, 4, "-Fmax", error) ||
        !checkArg(argv, 6, "-CritDelay", error) ||
        !checkArg(argv, 8, "-StaticPower", error) ||
        !checkArg(argv, 10, "-DynamicPower", error) ||
        !checkArg2(argv, 12, "-LUTs", "-ALUTs", error) ||
        !checkArg(argv, 14, "-Registers", error) ||
        !checkArg2(argv, 16, "-LEs", "-ALMs", error) ||
        !checkArg(argv, 18, "-DSP", error) ||
        !checkArg(argv, 20, "-Latency", error))
    {
        interp->result = error;
        return(TCL_ERROR);
    }

    float FMax=atof(argv[4]);
    float CritDelay=atof(argv[6]);
    float StaticPower=atof(argv[8]);
    float DynamicPower=atof(argv[10]);
    int LUTs=atoi(argv[12]);
    int Registers=atoi(argv[14]);
    int LogicElements=atoi(argv[16]);
    int DSPElements=atoi(argv[18]);
    int Latency=atoi(argv[20]);

    config->addOperation(argv[2], FMax, CritDelay, StaticPower, DynamicPower,
            LUTs, Registers, LogicElements, DSPElements, Latency);
    return(TCL_OK);
}

/// set_device_specs - tcl command to add device information
int set_device_specs(ClientData clientData, Tcl_Interp *interp, int
        argc, const char *argv[]) {
    static char error[100];
    if (argc != 13) {
        sprintf(error, "%s", "Expecting 13 arguments.");
        interp->result = error;
        return(TCL_ERROR);
    }
    LegupConfig *config = (LegupConfig*)clientData;

    if (!checkArg(argv, 2, "-Family", error) ||
        !checkArg(argv, 4, "-Device", error) ||
        !checkArg2(argv, 6, "-MaxLEs", "-MaxALMs", error) ||
        !checkArg2(argv, 8, "-MaxM4Ks", "-MaxM9KMemBlocks", error) ||
        !checkArg(argv, 10, "-MaxRAMBits", error) ||
        !checkArg(argv, 12, "-MaxDSPs", error))
    {
        interp->result = error;
        return(TCL_ERROR);
    }

    int MaxLEs = atoi(argv[6]);
    int MaxM4Ks = atoi(argv[8]);
    int MaxRAMBits = atoi(argv[10]);
    int MaxDSPs = atoi(argv[12]);

    config->setDeviceSpecs(argv[2], argv[4], MaxLEs, MaxM4Ks, MaxRAMBits, MaxDSPs);
    return(TCL_OK);
}

/// loop_pipeline - tcl command to pipeline a loop. Example:
///      loop_pipeline "loop" -ii 1
/// the ii is optional and specifies an pipeline initiation interval
int loop_pipeline(ClientData clientData, Tcl_Interp *interp, int argc, const
        char *argv[]) {
    static char error[100];
    if (argc != 2 && argc != 4) {
        static char error[] = "wrong # args: should be "
            "\"loop_pipeline \"loop\" [ -ii 1 ]\"";
        interp->result = error;
        assert(0);
        return(TCL_ERROR);
    }

    // check arguments are correct
    bool user_II = false;
    int II = 0;
    if (argc == 4) {
        if (!checkArg(argv, 3, "-ii", error)) {
            interp->result = error;
            return(TCL_ERROR);
        }
        user_II = true;
        II = atoi(argv[3]);
        assert(II >= 0 && "Initiation interval must be non-negative");
    }

    const char *label = argv[1];

    LegupConfig *config = (LegupConfig*)clientData;
    config->addLoopPipeline(label, user_II, II);
    return(TCL_OK);
}

/// return the device family set previously using the set_device_specs command
int get_device_family(ClientData clientData, Tcl_Interp *interp, int argc, const
        char *argv[]) {
    if (argc != 1) {
        static char error[] = "wrong # args: should be "
            "\"get_device_family\"";
        interp->result = error;
        assert(0);
        return(TCL_ERROR);
    }

    LegupConfig *config = (LegupConfig*)clientData;
    std::string familyStr = config->getDeviceFamily();
    static char family[100];
    strncpy(family, familyStr.c_str(), 100);
    interp->result = family;
    return(TCL_OK);
}


/// set_parameter - tcl command to add device information
int set_parameter(ClientData clientData, Tcl_Interp *interp, int argc, const
        char *argv[]) {
    if (argc != 3) {
        static char error[] = "wrong # args: should be "
            "\"set_parameter name value\"";
        interp->result = error;
        return(TCL_ERROR);
    }
    LegupConfig *config = (LegupConfig*)clientData;

    config->setParameter(argv[1], argv[2]);
    return(TCL_OK);
}

/// parseTclFile - reads a tcl configuration file and initialize the legupConfig
/// object. Returns false on error.
bool parseTclFile(std::string &ConfigFile, LegupConfig *legupConfig) {
      Tcl_Interp *interp = Tcl_CreateInterp();
      assert(interp);
      Tcl_CreateCommand(interp, "set_accelerator_function",
              set_accelerator_function, legupConfig, 0);
      Tcl_CreateCommand(interp, "set_parallel_accelerator_function",
              set_parallel_accelerator_function, legupConfig, 0);
      Tcl_CreateCommand(interp, "set_dcache_size",
              set_dcache_size, legupConfig, 0);
      Tcl_CreateCommand(interp, "set_dcache_linesize",
              set_dcache_linesize, legupConfig, 0);
	  Tcl_CreateCommand(interp, "set_dcache_way",
              set_dcache_way, legupConfig, 0);
      Tcl_CreateCommand(interp, "set_icache_size",
              set_icache_size, legupConfig, 0);
      Tcl_CreateCommand(interp, "set_icache_linesize",
              set_icache_linesize, legupConfig, 0);
	  Tcl_CreateCommand(interp, "set_icache_way",
              set_icache_way, legupConfig, 0);
	  Tcl_CreateCommand(interp, "set_dcache_ports",
              set_dcache_ports, legupConfig, 0);
	  Tcl_CreateCommand(interp, "set_dcache_type",
              set_dcache_type, legupConfig, 0);
      Tcl_CreateCommand(interp, "set_operation_attributes",
              set_operation_attributes, legupConfig, 0);
      Tcl_CreateCommand(interp, "set_device_specs",
              set_device_specs, legupConfig, 0);
      Tcl_CreateCommand(interp, "set_parameter",
              set_parameter, legupConfig, 0);
      Tcl_CreateCommand(interp, "loop_pipeline",
              loop_pipeline, legupConfig, 0);
      Tcl_CreateCommand(interp, "get_device_family",
              get_device_family, legupConfig, 0);
      int result = Tcl_EvalFile(interp, ConfigFile.c_str());
      if (result != TCL_OK) {
          errs() << ConfigFile << ":" << interp->errorLine << ": error: " <<
              Tcl_GetStringResult(interp) << "\n";
      }
      Tcl_DeleteInterp(interp);
      // can't call Tcl_Finalize() here - if we have multiple files then we'll
      // get a segfault. But note that without this call Tcl leaks some memory
      //Tcl_Finalize();
      return (result == TCL_OK);
}

} // End legup namespace
