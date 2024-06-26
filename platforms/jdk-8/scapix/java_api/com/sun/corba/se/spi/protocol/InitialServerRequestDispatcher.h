// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/com/sun/corba/se/spi/protocol/CorbaServerRequestDispatcher.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_PROTOCOL_INITIALSERVERREQUESTDISPATCHER_FWD
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_PROTOCOL_INITIALSERVERREQUESTDISPATCHER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::corba::se::spi::protocol { class InitialServerRequestDispatcher; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::corba::se::spi::protocol::InitialServerRequestDispatcher>
{
	static constexpr fixed_string class_name = "com/sun/corba/se/spi/protocol/InitialServerRequestDispatcher";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::com::sun::corba::se::spi::protocol::CorbaServerRequestDispatcher>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_PROTOCOL_INITIALSERVERREQUESTDISPATCHER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_PROTOCOL_INITIALSERVERREQUESTDISPATCHER)
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_PROTOCOL_INITIALSERVERREQUESTDISPATCHER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/corba/se/spi/resolver/Resolver.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::corba::se::spi::protocol::InitialServerRequestDispatcher : public jni::object_base<"com/sun/corba/se/spi/protocol/InitialServerRequestDispatcher",
	java::lang::Object,
	com::sun::corba::se::spi::protocol::CorbaServerRequestDispatcher>
{
public:

	void init(jni::ref<com::sun::corba::se::spi::resolver::Resolver> p1) { return call_method<"init", void>(p1); }

protected:

	InitialServerRequestDispatcher(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_PROTOCOL_INITIALSERVERREQUESTDISPATCHER
