// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/com/sun/corba/se/spi/ior/TaggedComponent.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_IOR_IIOP_JAVACODEBASECOMPONENT_FWD
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_IOR_IIOP_JAVACODEBASECOMPONENT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::corba::se::spi::ior::iiop { class JavaCodebaseComponent; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::corba::se::spi::ior::iiop::JavaCodebaseComponent>
{
	static constexpr fixed_string class_name = "com/sun/corba/se/spi/ior/iiop/JavaCodebaseComponent";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::com::sun::corba::se::spi::ior::TaggedComponent>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_IOR_IIOP_JAVACODEBASECOMPONENT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_IOR_IIOP_JAVACODEBASECOMPONENT)
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_IOR_IIOP_JAVACODEBASECOMPONENT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::corba::se::spi::ior::iiop::JavaCodebaseComponent : public jni::object_base<"com/sun/corba/se/spi/ior/iiop/JavaCodebaseComponent",
	java::lang::Object,
	com::sun::corba::se::spi::ior::TaggedComponent>
{
public:

	jni::ref<java::lang::String> getURLs() { return call_method<"getURLs", jni::ref<java::lang::String>>(); }

protected:

	JavaCodebaseComponent(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_IOR_IIOP_JAVACODEBASECOMPONENT