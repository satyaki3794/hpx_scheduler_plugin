//  Copyright (c) 2016 Satyaki Upadhyay
//
//  Distributed under the Boost Software License, Version 1.0. (See accompanying
//  file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

#include "local_priority_queue_scheduler.hpp"
#include "local_priority_queue_scheduler_plugin_factory.hpp"
#include "local_queue_scheduler.hpp"
#include "local_queue_scheduler_plugin_factory.hpp"
#include "static_priority_queue_scheduler.hpp"
#include "static_priority_queue_scheduler_plugin_factory.hpp"
#include "static_queue_scheduler.hpp"
#include "static_queue_scheduler_plugin_factory.hpp"


///////////////////////////////////////////////////////////////////////////////
// Add this once for each module
HPX_REGISTER_SCHEDULER_PLUGIN_MODULE_DYNAMIC();

// Add this once for each supported plugin type
typedef hpx::threads::policies::local_priority_queue_scheduler<> lp_sh;
HPX_REGISTER_LPQ_SCHEDULER_PLUGIN_FACTORY(lp_sh, local_priority_queue_scheduler);

typedef hpx::threads::policies::local_queue_scheduler<> l_sh;
HPX_REGISTER_LQ_SCHEDULER_PLUGIN_FACTORY(l_sh, local_queue_scheduler);

typedef hpx::threads::policies::static_priority_queue_scheduler<> sp_sh;
HPX_REGISTER_SPQ_SCHEDULER_PLUGIN_FACTORY(sp_sh, static_priority_queue_scheduler);


typedef hpx::threads::policies::static_queue_scheduler<> s_sh;
HPX_REGISTER_SQ_SCHEDULER_PLUGIN_FACTORY(s_sh, static_queue_scheduler);
