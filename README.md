<!---
  Copyright (c) 2016 Satyaki Upadhyay

  Distributed under the Boost Software License, Version 1.0. (See accompanying
  file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
-->

hpx_scheduler_plugin
====================

Repository for GSoC 2016 project to create HPX plugins for schedulers.

**Instructions for use**

cd $SCHEDULER_PLUGIN_HOME_DIR/SCHEDULER_PLUGIN_BUILD_DIR    
cmake -DHPX_DIR=$HPX_INSTALL_DIR ..  
make  
cp lib/hpx/libloaded_plugin.so $HPX_BUILD_DIR/lib/hpx/libhpx_loaded_plugin.so  
./bin/load_plugin
