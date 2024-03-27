// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/corba/se/impl/orb/DataCollectorBase.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_ORB_NORMALDATACOLLECTOR_FWD
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_ORB_NORMALDATACOLLECTOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::corba::se::impl::orb { class NormalDataCollector; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::corba::se::impl::orb::NormalDataCollector>
{
	static constexpr fixed_string class_name = "com/sun/corba/se/impl/orb/NormalDataCollector";
	using base_classes = std::tuple<scapix::java_api::com::sun::corba::se::impl::orb::DataCollectorBase>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_ORB_NORMALDATACOLLECTOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_ORB_NORMALDATACOLLECTOR)
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_ORB_NORMALDATACOLLECTOR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Properties.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::corba::se::impl::orb::NormalDataCollector : public jni::object_base<"com/sun/corba/se/impl/orb/NormalDataCollector",
	com::sun::corba::se::impl::orb::DataCollectorBase>
{
public:

	static jni::ref<com::sun::corba::se::impl::orb::NormalDataCollector> new_object(jni::ref<jni::array<java::lang::String>> p1, jni::ref<java::util::Properties> p2, jni::ref<java::lang::String> p3, jni::ref<java::lang::String> p4) { return base_::new_object(p1, p2, p3, p4); }
	jboolean isApplet() { return call_method<"isApplet", jboolean>(); }

protected:

	NormalDataCollector(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_ORB_NORMALDATACOLLECTOR