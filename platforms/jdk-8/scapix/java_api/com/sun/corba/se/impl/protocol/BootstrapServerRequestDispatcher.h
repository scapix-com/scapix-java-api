// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/com/sun/corba/se/spi/protocol/CorbaServerRequestDispatcher.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_PROTOCOL_BOOTSTRAPSERVERREQUESTDISPATCHER_FWD
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_PROTOCOL_BOOTSTRAPSERVERREQUESTDISPATCHER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::corba::se::impl::protocol { class BootstrapServerRequestDispatcher; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::corba::se::impl::protocol::BootstrapServerRequestDispatcher>
{
	static constexpr fixed_string class_name = "com/sun/corba/se/impl/protocol/BootstrapServerRequestDispatcher";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::com::sun::corba::se::spi::protocol::CorbaServerRequestDispatcher>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_PROTOCOL_BOOTSTRAPSERVERREQUESTDISPATCHER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_PROTOCOL_BOOTSTRAPSERVERREQUESTDISPATCHER)
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_PROTOCOL_BOOTSTRAPSERVERREQUESTDISPATCHER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/corba/se/pept/protocol/MessageMediator.h>
#include <scapix/java_api/com/sun/corba/se/spi/ior/IOR.h>
#include <scapix/java_api/com/sun/corba/se/spi/ior/ObjectKey.h>
#include <scapix/java_api/com/sun/corba/se/spi/orb/ORB.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::corba::se::impl::protocol::BootstrapServerRequestDispatcher : public jni::object_base<"com/sun/corba/se/impl/protocol/BootstrapServerRequestDispatcher",
	java::lang::Object,
	com::sun::corba::se::spi::protocol::CorbaServerRequestDispatcher>
{
public:

	static jni::ref<com::sun::corba::se::impl::protocol::BootstrapServerRequestDispatcher> new_object(jni::ref<com::sun::corba::se::spi::orb::ORB> p1) { return base_::new_object(p1); }
	void dispatch(jni::ref<com::sun::corba::se::pept::protocol::MessageMediator> p1) { return call_method<"dispatch", void>(p1); }
	jni::ref<com::sun::corba::se::spi::ior::IOR> locate(jni::ref<com::sun::corba::se::spi::ior::ObjectKey> p1) { return call_method<"locate", jni::ref<com::sun::corba::se::spi::ior::IOR>>(p1); }
	jint getId() { return call_method<"getId", jint>(); }

protected:

	BootstrapServerRequestDispatcher(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_PROTOCOL_BOOTSTRAPSERVERREQUESTDISPATCHER
