
DIR_UCppLabRoot		= "../../"	
DIR_UCppLabSrc		= DIR_UCppLabRoot .. "src/"
DIR_ProjDir			= _ACTION .. "/"
DIR_ProjBin 		= _ACTION .. "/bin/" 

solution "UCppLab"

	configurations { "Debug", "Release" }

	location (DIR_ProjDir)
	targetdir (DIR_ProjBin)

	defines { "DUMMY_PLACEHOLDER", "_WINDOWS" }
	platforms { "x32", "x64" }

	configuration { "Debug" }
		targetsuffix "_d"
		defines { "_DEBUG", "DEBUG" }
		flags   { "Symbols" }
	configuration { "Release*" }
		defines { "NDEBUG" }
		flags   { "Optimize" }

	configuration { "x32" }
		defines { "WIN32" }
	configuration { "x64" }
		defines { "WIN64" }


	project "UCppLab"
		kind "ConsoleApp"
		language "C++"

		files
		{
			"main.cpp",
			DIR_UCppLabSrc .. "**",
		}

		includedirs
		{
			DIR_UCppLabSrc,
		}


