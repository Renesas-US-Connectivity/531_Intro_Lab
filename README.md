# 531_Intro_Lab
Taking the DA1453x out of the box, changing sleep, advertising, and adding timers and debug statements.  This training is connected with toolbox and illustrates basic getting started ideas.

## Prerequisites

 - SmartSnippets Studio should be installed.
 - SmartSnippets Toolbox should be installed.
 - TeraTerm or equivalent terminal program should installed.
 - SDK6 is downloaded and extracted to your computer.
 - Lab uses DA14531MOD Pro DK.

 ## Prepare Hardware and Calibrate Power Profiler

 1. Remove Flash Jumpers (Module has integrated flash) - On J1 Remove the first 5 jumpers.

 2. Remove Daughterboard, and connect Motherboard to your computer

 3. Open SmartSnippets Toolbox, and select UART/SPI (SPI is needed for Power Profiler data acquisition).

 4. Create a new project and name it 531_Mod_Lab.  

 5. Select the DA14531 under chips and select Launch.

 6.  Navigate to Power Profiler Tab.  

 ## Importing the Project for the First Time

 1. Open SmartSnippets Studio, and select a workspace.  The workspace should be the top level of SDK6: ![Workspace](imgs/workspace_selector.png)

 2. Clone this repo, or download the source from main.

 3. From SmartSnippets Studio, Go to File->Import.  Select Existing Projects into Workspace: ![Existing Project Import](imgs/existing_project_import.png) and press Next.

 4. Click the browse button on the right, then navigate to this repo's code location.  Check the empty_peripheral_template project and select finish.  ![Browse for Project](imgs/browse_to_project.png) 

 5.  Your project should compile and be ready to load.

 ## Lab

