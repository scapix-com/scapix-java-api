// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_OA_OBJECTADAPTER_FWD
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_OA_OBJECTADAPTER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::corba::se::spi::oa { class ObjectAdapter; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::corba::se::spi::oa::ObjectAdapter>
{
	static constexpr fixed_string class_name = "com/sun/corba/se/spi/oa/ObjectAdapter";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_OA_OBJECTADAPTER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_OA_OBJECTADAPTER)
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_OA_OBJECTADAPTER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/corba/se/spi/ior/IORTemplate.h>
#include <scapix/java_api/com/sun/corba/se/spi/oa/OAInvocationInfo.h>
#include <scapix/java_api/com/sun/corba/se/spi/orb/ORB.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/org/omg/CORBA/Object.h>
#include <scapix/java_api/org/omg/CORBA/Policy.h>
#include <scapix/java_api/org/omg/PortableInterceptor/ObjectReferenceFactory.h>
#include <scapix/java_api/org/omg/PortableInterceptor/ObjectReferenceTemplate.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::corba::se::spi::oa::ObjectAdapter : public jni::object_base<"com/sun/corba/se/spi/oa/ObjectAdapter",
	java::lang::Object>
{
public:

	jni::ref<com::sun::corba::se::spi::orb::ORB> getORB() { return call_method<"getORB", jni::ref<com::sun::corba::se::spi::orb::ORB>>(); }
	jni::ref<org::omg::CORBA::Policy> getEffectivePolicy(jint p1) { return call_method<"getEffectivePolicy", jni::ref<org::omg::CORBA::Policy>>(p1); }
	jni::ref<com::sun::corba::se::spi::ior::IORTemplate> getIORTemplate() { return call_method<"getIORTemplate", jni::ref<com::sun::corba::se::spi::ior::IORTemplate>>(); }
	jint getManagerId() { return call_method<"getManagerId", jint>(); }
	jshort getState() { return call_method<"getState", jshort>(); }
	jni::ref<org::omg::PortableInterceptor::ObjectReferenceTemplate> getAdapterTemplate() { return call_method<"getAdapterTemplate", jni::ref<org::omg::PortableInterceptor::ObjectReferenceTemplate>>(); }
	jni::ref<org::omg::PortableInterceptor::ObjectReferenceFactory> getCurrentFactory() { return call_method<"getCurrentFactory", jni::ref<org::omg::PortableInterceptor::ObjectReferenceFactory>>(); }
	void setCurrentFactory(jni::ref<org::omg::PortableInterceptor::ObjectReferenceFactory> p1) { return call_method<"setCurrentFactory", void>(p1); }
	jni::ref<org::omg::CORBA::Object> getLocalServant(jni::ref<jni::array<jbyte>> p1) { return call_method<"getLocalServant", jni::ref<org::omg::CORBA::Object>>(p1); }
	void getInvocationServant(jni::ref<com::sun::corba::se::spi::oa::OAInvocationInfo> p1) { return call_method<"getInvocationServant", void>(p1); }
	void enter() { return call_method<"enter", void>(); }
	void exit() { return call_method<"exit", void>(); }
	void returnServant() { return call_method<"returnServant", void>(); }
	jni::ref<com::sun::corba::se::spi::oa::OAInvocationInfo> makeInvocationInfo(jni::ref<jni::array<jbyte>> p1) { return call_method<"makeInvocationInfo", jni::ref<com::sun::corba::se::spi::oa::OAInvocationInfo>>(p1); }
	jni::ref<jni::array<java::lang::String>> getInterfaces(jni::ref<java::lang::Object> p1, jni::ref<jni::array<jbyte>> p2) { return call_method<"getInterfaces", jni::ref<jni::array<java::lang::String>>>(p1, p2); }

protected:

	ObjectAdapter(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_OA_OBJECTADAPTER