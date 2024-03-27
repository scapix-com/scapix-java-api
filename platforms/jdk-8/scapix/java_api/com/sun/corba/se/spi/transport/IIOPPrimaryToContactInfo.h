// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_TRANSPORT_IIOPPRIMARYTOCONTACTINFO_FWD
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_TRANSPORT_IIOPPRIMARYTOCONTACTINFO_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::corba::se::spi::transport { class IIOPPrimaryToContactInfo; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::corba::se::spi::transport::IIOPPrimaryToContactInfo>
{
	static constexpr fixed_string class_name = "com/sun/corba/se/spi/transport/IIOPPrimaryToContactInfo";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_TRANSPORT_IIOPPRIMARYTOCONTACTINFO_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_TRANSPORT_IIOPPRIMARYTOCONTACTINFO)
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_TRANSPORT_IIOPPRIMARYTOCONTACTINFO

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/corba/se/pept/transport/ContactInfo.h>
#include <scapix/java_api/java/util/List.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::corba::se::spi::transport::IIOPPrimaryToContactInfo : public jni::object_base<"com/sun/corba/se/spi/transport/IIOPPrimaryToContactInfo",
	java::lang::Object>
{
public:

	void reset(jni::ref<com::sun::corba::se::pept::transport::ContactInfo> p1) { return call_method<"reset", void>(p1); }
	jboolean hasNext(jni::ref<com::sun::corba::se::pept::transport::ContactInfo> p1, jni::ref<com::sun::corba::se::pept::transport::ContactInfo> p2, jni::ref<java::util::List> p3) { return call_method<"hasNext", jboolean>(p1, p2, p3); }
	jni::ref<com::sun::corba::se::pept::transport::ContactInfo> next(jni::ref<com::sun::corba::se::pept::transport::ContactInfo> p1, jni::ref<com::sun::corba::se::pept::transport::ContactInfo> p2, jni::ref<java::util::List> p3) { return call_method<"next", jni::ref<com::sun::corba::se::pept::transport::ContactInfo>>(p1, p2, p3); }

protected:

	IIOPPrimaryToContactInfo(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_TRANSPORT_IIOPPRIMARYTOCONTACTINFO