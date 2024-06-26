// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/com/sun/corba/se/pept/transport/ContactInfoList.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_TRANSPORT_CORBACONTACTINFOLIST_FWD
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_TRANSPORT_CORBACONTACTINFOLIST_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::corba::se::spi::transport { class CorbaContactInfoList; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::corba::se::spi::transport::CorbaContactInfoList>
{
	static constexpr fixed_string class_name = "com/sun/corba/se/spi/transport/CorbaContactInfoList";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::com::sun::corba::se::pept::transport::ContactInfoList>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_TRANSPORT_CORBACONTACTINFOLIST_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_TRANSPORT_CORBACONTACTINFOLIST)
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_TRANSPORT_CORBACONTACTINFOLIST

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/corba/se/spi/ior/IOR.h>
#include <scapix/java_api/com/sun/corba/se/spi/protocol/LocalClientRequestDispatcher.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::corba::se::spi::transport::CorbaContactInfoList : public jni::object_base<"com/sun/corba/se/spi/transport/CorbaContactInfoList",
	java::lang::Object,
	com::sun::corba::se::pept::transport::ContactInfoList>
{
public:

	void setTargetIOR(jni::ref<com::sun::corba::se::spi::ior::IOR> p1) { return call_method<"setTargetIOR", void>(p1); }
	jni::ref<com::sun::corba::se::spi::ior::IOR> getTargetIOR() { return call_method<"getTargetIOR", jni::ref<com::sun::corba::se::spi::ior::IOR>>(); }
	void setEffectiveTargetIOR(jni::ref<com::sun::corba::se::spi::ior::IOR> p1) { return call_method<"setEffectiveTargetIOR", void>(p1); }
	jni::ref<com::sun::corba::se::spi::ior::IOR> getEffectiveTargetIOR() { return call_method<"getEffectiveTargetIOR", jni::ref<com::sun::corba::se::spi::ior::IOR>>(); }
	jni::ref<com::sun::corba::se::spi::protocol::LocalClientRequestDispatcher> getLocalClientRequestDispatcher() { return call_method<"getLocalClientRequestDispatcher", jni::ref<com::sun::corba::se::spi::protocol::LocalClientRequestDispatcher>>(); }
	jint hashCode() { return call_method<"hashCode", jint>(); }

protected:

	CorbaContactInfoList(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_TRANSPORT_CORBACONTACTINFOLIST
