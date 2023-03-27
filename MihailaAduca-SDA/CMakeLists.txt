cmake_minimum_required(VERSION 3.21)
project(MihailaAduca_SDA)

set(CMAKE_CXX_STANDARD 14)

add_executable(MihailaAduca_SDA main.cpp User.h User.cpp ArrayList.h MultimeOrd.h Node.h Array.h UserRepository.h UserRepository.cpp UserService.h UserService.cpp UI.h UI.cpp Messages.h Messages.cpp MessagesRepository.h MessagesRepository.cpp MessagesService.h MessagesService.cpp Friendship.h Friendship.cpp FsRepository.h FsRepository.cpp FsService.h FsService.cpp Event.h Event.cpp EventRepository.h EventRepository.cpp EventService.h EventService.cpp)
