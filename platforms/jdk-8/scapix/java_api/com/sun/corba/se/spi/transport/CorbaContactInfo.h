// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/com/sun/corba/se/pept/transport/ContactInfo.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_TRANSPORT_CORBACONTACTINFO_FWD
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_TRANSPORT_CORBACONTACTINFO_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::corba::se::spi::transport { class CorbaContactInfo; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::corba::se::spi::transport::CorbaContactInfo>
{
	static constexpr fixed_string class_name = "com/sun/corba/se/spi/transport/CorbaContactInfo";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::com::sun::corba::se::pept::transport::ContactInfo>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_TRANSPORT_CORBACONTACTINFO_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_TRANSPORT_CORBACONTACTINFO)
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_TRANSPORT_CORBACONTACTINFO

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/corba/se/spi/ior/IOR.h>
#include <scapix/java_api/com/sun/corba/se/spi/ior/iiop/IIOPProfile.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::corba::se::spi::transport::CorbaContactInfo : public jni::object_base<"com/sun/corba/se/spi/transport/CorbaContactInfo",
	java::lang::Object,
	com::sun::corba::se::pept::transport::ContactInfo>
{
public:

	jni::ref<com::sun::corba::se::spi::ior::IOR> getTargetIOR() { return call_method<"getTargetIOR", jni::ref<com::sun::corba::se::spi::ior::IOR>>(); }
	jni::ref<com::sun::corba::se::spi::ior::IOR> getEffectiveTargetIOR() { return call_method<"getEffectiveTargetIOR", jni::ref<com::sun::corba::se::spi::ior::IOR>>(); }
	jni::ref<com::sun::corba::se::spi::ior::iiop::IIOPProfile> getEffectiveProfile() { return call_method<"getEffectiveProfile", jni::ref<com::sun::corba::se::spi::ior::iiop::IIOPProfile>>(); }
	void setAddressingDisposition(jshort p1) { return call_method<"setAddressingDisposition", void>(p1); }
	jshort getAddressingDisposition() { return call_method<"getAddressingDisposition", jshort>(); }
	jni::ref<java::lang::String> getMonitoringName() { return call_method<"getMonitoringName", jni::ref<java::lang::String>>(); }

protected:

	CorbaContactInfo(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_TRANSPORT_CORBACONTACTINFO
