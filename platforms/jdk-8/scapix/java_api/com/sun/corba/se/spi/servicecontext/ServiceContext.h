// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_SERVICECONTEXT_SERVICECONTEXT_FWD
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_SERVICECONTEXT_SERVICECONTEXT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::corba::se::spi::servicecontext { class ServiceContext; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::corba::se::spi::servicecontext::ServiceContext>
{
	static constexpr fixed_string class_name = "com/sun/corba/se/spi/servicecontext/ServiceContext";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_SERVICECONTEXT_SERVICECONTEXT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_SERVICECONTEXT_SERVICECONTEXT)
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_SERVICECONTEXT_SERVICECONTEXT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/corba/se/spi/ior/iiop/GIOPVersion.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/org/omg/CORBA_2_3/portable/OutputStream.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::corba::se::spi::servicecontext::ServiceContext : public jni::object_base<"com/sun/corba/se/spi/servicecontext/ServiceContext",
	java::lang::Object>
{
public:

	jint getId() { return call_method<"getId", jint>(); }
	void write(jni::ref<org::omg::CORBA_2_3::portable::OutputStream> p1, jni::ref<com::sun::corba::se::spi::ior::iiop::GIOPVersion> p2) { return call_method<"write", void>(p1, p2); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	ServiceContext(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_SERVICECONTEXT_SERVICECONTEXT
