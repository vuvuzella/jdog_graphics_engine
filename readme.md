### Overview
* Im recreating a project that I did for my computer graphics course in uni. Previously I was able to generate terrain and the goal was to be able to have 3D models roam around the terrain moving. The engine is basically an environment with living entities. However, I got stumped right at the environment generation and was not able to complete the project in it entirety. This repo hopes to recreate the project and hopefully finish my initial goal.
* When the renderer is then finished, I would move on to other parts of a game engine. Ultimately, I wanted to create a 3D engine renderer that can be used for simulation.

### TODO:
- [ ] Migrate build system from cmake to ninja
- [ ] Integrate ImGUI
- [ ] Graphics Renderer
  - [ ] Create window of the program
  - [ ] Implement viewport
  - [ ] Implement Movements
  - [ ] Import 3D model into environment
  - [ ] Create movements on the 3D model

### Requirements:
* OS: ubuntu 20 based distro
* System Software
  * cmake 3.16
  * xorg-dev

### To Build the project:
* Checkout the repository
  - `$ git clone https://github.com/vuvuzella/jdog_graphics_engine --recursive`
* at the root folder, run
  - `$ cmake -S ./src -B ./build`
  - `$ cd ./build`
  - `$ make`

### To run
* at the root folder, run
  - `$ ./build/CHERNO_GAME_ENGINE_LINUX`