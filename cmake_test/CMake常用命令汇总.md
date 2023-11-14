| 命令                                                                | 功能                                                          |
|-------------------------------------------------------------------| ------------------------------------------------------------- |
| cmake_minimum_required(VERSION<version>)                          | 指定项目所需的最低CMake版本                                   |
| project(<project_name>)                                           | 指定项目的名称，可以包括版本号和描述信息                      |
| add_executable(<executable_name> <source_files>)                  | 定义可执行文件并指定源代码文件                                |
| add_library(<library_name> <library_type> <source_files>)         | 定义库文件并指定类型（STATIC, SHARED, 或 MODULE）和源代码文件 |
| target_link_libraries(<target_name> <library_name>)               | 将目标与特定的库文件进行链接                                  |
| include_directories(<directory>)                                  | 添加包含文件夹，使得编译器能够找到头文件                      |
| link_directories(<directory>)                                     | 添加链接文件夹，使得链接器能够找到库文件                      |
| set(CMAKE_CXX_STANDARD<version>)                                  | 设置C++标准的版本                                             |
| find_package(<package_name>)                                      | 查找并加载特定的外部包，比如Boost、OpenCV等                   |
| configure_file(<in_put> <out_put>)                                | 根据给定的输入文件生成输出文件，通常用于生成配置文件          |
| install(TARGETS <target_name> DESTINATION<destination>)           | 将生成的目标文件安装到指定的位置                              |
| add_definitions(-D<macro_name>=<value>)                           | 添加预定义的宏定义                                            |
| add_subdirectory(<subdirectory>)                                  | 添加子目录以便构建其中的项目                                  |
| set(SOURCE_FILES <source_files>)                                  | 设置源代码文件变量                                            |
| set(CMAKE_CXX_FLAGS "<flags>")                                    | 设置C++编译器标志                                             |
| set(CMAKE_EXE_LINKER_FLAGS "<flags>")                             | 设置可执行文件链接器标志                                      |
| set(CMAKE_BUILD_TYPE<type>)                                       | 设置构建类型，如Debug、Release等                              |
| target_include_directories(<target_name><directory>)              | 向特定目标添加包含文件夹，使得编译器能够找到头文件            |
| target_compile_definitions(<target_name><definitions>)            | 向特定目标添加宏定义                                          |
| target_compile_options(<target_name><options>)                    | 向特定目标添加编译选项                                        |
| target_link_options(<target_name><options>)                       | 向特定目标添加链接选项                                        |
| file(GLOB<variable> <globbing_expression>)                        | 将符合通配符表达式的文件列表存储到变量中                      |
| string(REPLACE <match_string> <replace_string> <input_string>)    | 字符串替换操作                                                |
| math(EXPR<variable> "<expression>")                               | 执行数学表达式计算，并将结果存储到变量中                      |
| if(<condition>)                                                   | 条件语句开始                                                  |
| elseif(<condition>)                                               | 条件语句的其他条件分支                                        |
| else()                                                            | 条件语句的默认分支                                            |
| endif()                                                           | 条件语句结束                                                  |
| while(<condition>)                                                | 循环语句开始                                                  |
| endwhile()                                                        | 循环语句结束                                                  |
| foreach(<variable> <list>)                                        | 遍历列表中的每个元素                                          |
| endforeach()                                                      | foreach循环结束                                               |
| message(<message>)                                                | 输出消息到控制台                                              |
| option(<option_name><description> [default_value])                | 定义一个选项                                                  |
| add_test(<test_name> <test_executable>)                           | 添加测试                                                      |
| enable_testing()                                                  | 启用测试                                                      |
| set_tests_properties(<test_name> PROPERTIES<property> <value>)    | 设置测试属性                                                  |
| ctest [--output-on-failure]                                       | 运行测试                                                      |
| add_dependencies(<target_name> <dependency_name>)                 | 添加目标的依赖关系                                            |
| target_compile_features(<target_name><feature>)                   | 向目标添加所需的编译器特性                                    |
| target_sources(<target_name> PRIVATE/PUBLIC/INTERFACE<sources>)   | 向目标添加源代码文件                                          |
| target_link_libraries(<target_name> INTERFACE <library_name>)     | 将目标与特定的接口库进行链接                                  |
| set_target_properties(<target_name> PROPERTIES<property> <value>) | 设置目标属性                                                  |
| get_filename_component(<variable> <filename> <component>)         | 获取文件名或路径的特定组成部分                                |
| add_custom_command(<output> <command> [ARGS <arguments>...])      | 添加自定义命令，用于构建过程中生成文件等                      |
| add_custom_target(<target_name> [DEPENDS<dependencies>...])       | 添加自定义目标，用于执行自定义命令或其他构建任务              |
| execute_process(COMMAND<command> [ARGS <arguments>...])           | 执行外部命令                                                  |
| set_directory_properties(PROPERTIES<property> <value>)            | 设置目录属性                                                  |
| target_compile_definitions(<target_name> INTERFACE<definitions>)  | 向接口目标添加宏定义。                                        |
