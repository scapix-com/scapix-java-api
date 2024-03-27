// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/com/sun/corba/se/spi/ior/TaggedProfileTemplate.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_IOR_IIOP_IIOPPROFILETEMPLATE_FWD
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_IOR_IIOP_IIOPPROFILETEMPLATE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::corba::se::spi::ior::iiop { class IIOPProfileTemplate; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::corba::se::spi::ior::iiop::IIOPProfileTemplate>
{
	static constexpr fixed_string class_name = "com/sun/corba/se/spi/ior/iiop/IIOPProfileTemplate";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::com::sun::corba::se::spi::ior::TaggedProfileTemplate>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_IOR_IIOP_IIOPPROFILETEMPLATE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_IOR_IIOP_IIOPPROFILETEMPLATE)
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_IOR_IIOP_IIOPPROFILETEMPLATE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/corba/se/spi/ior/iiop/GIOPVersion.h>
#include <scapix/java_api/com/sun/corba/se/spi/ior/iiop/IIOPAddress.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::corba::se::spi::ior::iiop::IIOPProfileTemplate : public jni::object_base<"com/sun/corba/se/spi/ior/iiop/IIOPProfileTemplate",
	java::lang::Object,
	com::sun::corba::se::spi::ior::TaggedProfileTemplate>
{
public:

	jni::ref<com::sun::corba::se::spi::ior::iiop::GIOPVersion> getGIOPVersion() { return call_method<"getGIOPVersion", jni::ref<com::sun::corba::se::spi::ior::iiop::GIOPVersion>>(); }
	jni::ref<com::sun::corba::se::spi::ior::iiop::IIOPAddress> getPrimaryAddress() { return call_method<"getPrimaryAddress", jni::ref<com::sun::corba::se::spi::ior::iiop::IIOPAddress>>(); }

protected:

	IIOPProfileTemplate(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_IOR_IIOP_IIOPPROFILETEMPLATE
