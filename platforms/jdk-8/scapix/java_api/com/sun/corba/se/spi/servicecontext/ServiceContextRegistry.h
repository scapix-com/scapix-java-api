// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_SERVICECONTEXT_SERVICECONTEXTREGISTRY_FWD
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_SERVICECONTEXT_SERVICECONTEXTREGISTRY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::corba::se::spi::servicecontext { class ServiceContextRegistry; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::corba::se::spi::servicecontext::ServiceContextRegistry>
{
	static constexpr fixed_string class_name = "com/sun/corba/se/spi/servicecontext/ServiceContextRegistry";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_SERVICECONTEXT_SERVICECONTEXTREGISTRY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_SERVICECONTEXT_SERVICECONTEXTREGISTRY)
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_SERVICECONTEXT_SERVICECONTEXTREGISTRY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/corba/se/spi/orb/ORB.h>
#include <scapix/java_api/com/sun/corba/se/spi/servicecontext/ServiceContextData.h>
#include <scapix/java_api/java/lang/Class.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::corba::se::spi::servicecontext::ServiceContextRegistry : public jni::object_base<"com/sun/corba/se/spi/servicecontext/ServiceContextRegistry",
	java::lang::Object>
{
public:

	static jni::ref<com::sun::corba::se::spi::servicecontext::ServiceContextRegistry> new_object(jni::ref<com::sun::corba::se::spi::orb::ORB> p1) { return base_::new_object(p1); }
	void register_(jni::ref<java::lang::Class> p1) { return call_method<"register", void>(p1); }
	jni::ref<com::sun::corba::se::spi::servicecontext::ServiceContextData> findServiceContextData(jint p1) { return call_method<"findServiceContextData", jni::ref<com::sun::corba::se::spi::servicecontext::ServiceContextData>>(p1); }

protected:

	ServiceContextRegistry(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_SERVICECONTEXT_SERVICECONTEXTREGISTRY