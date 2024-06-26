// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/corba/se/spi/servicecontext/ServiceContext.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_SERVICECONTEXT_ORBVERSIONSERVICECONTEXT_FWD
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_SERVICECONTEXT_ORBVERSIONSERVICECONTEXT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::corba::se::spi::servicecontext { class ORBVersionServiceContext; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::corba::se::spi::servicecontext::ORBVersionServiceContext>
{
	static constexpr fixed_string class_name = "com/sun/corba/se/spi/servicecontext/ORBVersionServiceContext";
	using base_classes = std::tuple<scapix::java_api::com::sun::corba::se::spi::servicecontext::ServiceContext>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_SERVICECONTEXT_ORBVERSIONSERVICECONTEXT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_SERVICECONTEXT_ORBVERSIONSERVICECONTEXT)
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_SERVICECONTEXT_ORBVERSIONSERVICECONTEXT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/corba/se/spi/ior/iiop/GIOPVersion.h>
#include <scapix/java_api/com/sun/corba/se/spi/orb/ORBVersion.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/org/omg/CORBA_2_3/portable/InputStream.h>
#include <scapix/java_api/org/omg/CORBA_2_3/portable/OutputStream.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::corba::se::spi::servicecontext::ORBVersionServiceContext : public jni::object_base<"com/sun/corba/se/spi/servicecontext/ORBVersionServiceContext",
	com::sun::corba::se::spi::servicecontext::ServiceContext>
{
public:

	static jint SERVICE_CONTEXT_ID() { return get_static_field<"SERVICE_CONTEXT_ID", jint>(); }

	static jni::ref<com::sun::corba::se::spi::servicecontext::ORBVersionServiceContext> new_object() { return base_::new_object(); }
	static jni::ref<com::sun::corba::se::spi::servicecontext::ORBVersionServiceContext> new_object(jni::ref<com::sun::corba::se::spi::orb::ORBVersion> p1) { return base_::new_object(p1); }
	static jni::ref<com::sun::corba::se::spi::servicecontext::ORBVersionServiceContext> new_object(jni::ref<org::omg::CORBA_2_3::portable::InputStream> p1, jni::ref<com::sun::corba::se::spi::ior::iiop::GIOPVersion> p2) { return base_::new_object(p1, p2); }
	jint getId() { return call_method<"getId", jint>(); }
	void writeData(jni::ref<org::omg::CORBA_2_3::portable::OutputStream> p1) { return call_method<"writeData", void>(p1); }
	jni::ref<com::sun::corba::se::spi::orb::ORBVersion> getVersion() { return call_method<"getVersion", jni::ref<com::sun::corba::se::spi::orb::ORBVersion>>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	ORBVersionServiceContext(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_SERVICECONTEXT_ORBVERSIONSERVICECONTEXT
