// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/sun/rmi/server/WeakClassHashMap.h>

#ifndef SCAPIX_JAVA_API_SUN_RMI_SERVER_UNICASTSERVERREF_HASHTOMETHOD_MAPS_FWD
#define SCAPIX_JAVA_API_SUN_RMI_SERVER_UNICASTSERVERREF_HASHTOMETHOD_MAPS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::rmi::server { class UnicastServerRef_HashToMethod_Maps; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::rmi::server::UnicastServerRef_HashToMethod_Maps>
{
	static constexpr fixed_string class_name = "sun/rmi/server/UnicastServerRef$HashToMethod_Maps";
	using base_classes = std::tuple<scapix::java_api::sun::rmi::server::WeakClassHashMap>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_RMI_SERVER_UNICASTSERVERREF_HASHTOMETHOD_MAPS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_RMI_SERVER_UNICASTSERVERREF_HASHTOMETHOD_MAPS)
#define SCAPIX_JAVA_API_SUN_RMI_SERVER_UNICASTSERVERREF_HASHTOMETHOD_MAPS

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::rmi::server::UnicastServerRef_HashToMethod_Maps : public jni::object_base<"sun/rmi/server/UnicastServerRef$HashToMethod_Maps",
	sun::rmi::server::WeakClassHashMap>
{
public:


protected:

	UnicastServerRef_HashToMethod_Maps(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_RMI_SERVER_UNICASTSERVERREF_HASHTOMETHOD_MAPS
