##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=Robocop
ConfigurationName      :=Debug
WorkspacePath          := "C:\Users\Adriano\Desktop\Codigos\Prog\RobocopFim att5"
ProjectPath            := "C:\Users\Adriano\Desktop\Codigos\Prog\RobocopFim att5"
IntermediateDirectory  :=./Debug
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=Adriano
Date                   :=22/08/2015
CodeLitePath           :="C:\Program Files\CodeLite"
LinkerName             :=C:/MinGW-4.8.1/bin/g++.exe
SharedObjectLinkerName :=C:/MinGW-4.8.1/bin/g++.exe -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.i
DebugSwitch            :=-g 
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputFile             :=$(IntermediateDirectory)/$(ProjectName)
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :="Robocop.txt"
PCHCompileFlags        :=
MakeDirCommand         :=makedir
RcCmpOptions           := 
RcCompilerName         :=C:/MinGW-4.8.1/bin/windres.exe
LinkOptions            :=  
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := C:/MinGW-4.8.1/bin/ar.exe rcu
CXX      := C:/MinGW-4.8.1/bin/g++.exe
CC       := C:/MinGW-4.8.1/bin/gcc.exe
CXXFLAGS :=  -g -O0 -Wall $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := C:/MinGW-4.8.1/bin/as.exe


##
## User defined environment variables
##
CodeLiteDir:=C:\Program Files\CodeLite
UNIT_TEST_PP_SRC_DIR:=C:\UnitTest++-1.3
Objects0=$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IntermediateDirectory)/Data.cpp$(ObjectSuffix) $(IntermediateDirectory)/Arma.cpp$(ObjectSuffix) $(IntermediateDirectory)/Armadura.cpp$(ObjectSuffix) $(IntermediateDirectory)/Diretivas.cpp$(ObjectSuffix) $(IntermediateDirectory)/Ultron.cpp$(ObjectSuffix) $(IntermediateDirectory)/Dispositivo.cpp$(ObjectSuffix) $(IntermediateDirectory)/Robo.cpp$(ObjectSuffix) $(IntermediateDirectory)/Exterminador.cpp$(ObjectSuffix) $(IntermediateDirectory)/Robocop.cpp$(ObjectSuffix) \
	



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: $(OutputFile)

$(OutputFile): $(IntermediateDirectory)/.d $(Objects) 
	@$(MakeDirCommand) $(@D)
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@$(MakeDirCommand) "./Debug"


$(IntermediateDirectory)/.d:
	@$(MakeDirCommand) "./Debug"

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/main.cpp$(ObjectSuffix): main.cpp $(IntermediateDirectory)/main.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Adriano/Desktop/Codigos/Prog/RobocopFim att5/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/main.cpp$(DependSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/main.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/main.cpp$(DependSuffix) -MM "main.cpp"

$(IntermediateDirectory)/main.cpp$(PreprocessSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/main.cpp$(PreprocessSuffix) "main.cpp"

$(IntermediateDirectory)/Data.cpp$(ObjectSuffix): Data.cpp $(IntermediateDirectory)/Data.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Adriano/Desktop/Codigos/Prog/RobocopFim att5/Data.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Data.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Data.cpp$(DependSuffix): Data.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Data.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Data.cpp$(DependSuffix) -MM "Data.cpp"

$(IntermediateDirectory)/Data.cpp$(PreprocessSuffix): Data.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Data.cpp$(PreprocessSuffix) "Data.cpp"

$(IntermediateDirectory)/Arma.cpp$(ObjectSuffix): Arma.cpp $(IntermediateDirectory)/Arma.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Adriano/Desktop/Codigos/Prog/RobocopFim att5/Arma.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Arma.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Arma.cpp$(DependSuffix): Arma.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Arma.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Arma.cpp$(DependSuffix) -MM "Arma.cpp"

$(IntermediateDirectory)/Arma.cpp$(PreprocessSuffix): Arma.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Arma.cpp$(PreprocessSuffix) "Arma.cpp"

$(IntermediateDirectory)/Armadura.cpp$(ObjectSuffix): Armadura.cpp $(IntermediateDirectory)/Armadura.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Adriano/Desktop/Codigos/Prog/RobocopFim att5/Armadura.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Armadura.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Armadura.cpp$(DependSuffix): Armadura.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Armadura.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Armadura.cpp$(DependSuffix) -MM "Armadura.cpp"

$(IntermediateDirectory)/Armadura.cpp$(PreprocessSuffix): Armadura.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Armadura.cpp$(PreprocessSuffix) "Armadura.cpp"

$(IntermediateDirectory)/Diretivas.cpp$(ObjectSuffix): Diretivas.cpp $(IntermediateDirectory)/Diretivas.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Adriano/Desktop/Codigos/Prog/RobocopFim att5/Diretivas.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Diretivas.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Diretivas.cpp$(DependSuffix): Diretivas.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Diretivas.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Diretivas.cpp$(DependSuffix) -MM "Diretivas.cpp"

$(IntermediateDirectory)/Diretivas.cpp$(PreprocessSuffix): Diretivas.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Diretivas.cpp$(PreprocessSuffix) "Diretivas.cpp"

$(IntermediateDirectory)/Ultron.cpp$(ObjectSuffix): Ultron.cpp $(IntermediateDirectory)/Ultron.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Adriano/Desktop/Codigos/Prog/RobocopFim att5/Ultron.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Ultron.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Ultron.cpp$(DependSuffix): Ultron.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Ultron.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Ultron.cpp$(DependSuffix) -MM "Ultron.cpp"

$(IntermediateDirectory)/Ultron.cpp$(PreprocessSuffix): Ultron.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Ultron.cpp$(PreprocessSuffix) "Ultron.cpp"

$(IntermediateDirectory)/Dispositivo.cpp$(ObjectSuffix): Dispositivo.cpp $(IntermediateDirectory)/Dispositivo.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Adriano/Desktop/Codigos/Prog/RobocopFim att5/Dispositivo.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Dispositivo.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Dispositivo.cpp$(DependSuffix): Dispositivo.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Dispositivo.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Dispositivo.cpp$(DependSuffix) -MM "Dispositivo.cpp"

$(IntermediateDirectory)/Dispositivo.cpp$(PreprocessSuffix): Dispositivo.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Dispositivo.cpp$(PreprocessSuffix) "Dispositivo.cpp"

$(IntermediateDirectory)/Robo.cpp$(ObjectSuffix): Robo.cpp $(IntermediateDirectory)/Robo.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Adriano/Desktop/Codigos/Prog/RobocopFim att5/Robo.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Robo.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Robo.cpp$(DependSuffix): Robo.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Robo.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Robo.cpp$(DependSuffix) -MM "Robo.cpp"

$(IntermediateDirectory)/Robo.cpp$(PreprocessSuffix): Robo.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Robo.cpp$(PreprocessSuffix) "Robo.cpp"

$(IntermediateDirectory)/Exterminador.cpp$(ObjectSuffix): Exterminador.cpp $(IntermediateDirectory)/Exterminador.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Adriano/Desktop/Codigos/Prog/RobocopFim att5/Exterminador.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Exterminador.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Exterminador.cpp$(DependSuffix): Exterminador.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Exterminador.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Exterminador.cpp$(DependSuffix) -MM "Exterminador.cpp"

$(IntermediateDirectory)/Exterminador.cpp$(PreprocessSuffix): Exterminador.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Exterminador.cpp$(PreprocessSuffix) "Exterminador.cpp"

$(IntermediateDirectory)/Robocop.cpp$(ObjectSuffix): Robocop.cpp $(IntermediateDirectory)/Robocop.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Adriano/Desktop/Codigos/Prog/RobocopFim att5/Robocop.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Robocop.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Robocop.cpp$(DependSuffix): Robocop.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Robocop.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Robocop.cpp$(DependSuffix) -MM "Robocop.cpp"

$(IntermediateDirectory)/Robocop.cpp$(PreprocessSuffix): Robocop.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Robocop.cpp$(PreprocessSuffix) "Robocop.cpp"


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r ./Debug/


