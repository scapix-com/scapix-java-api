// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_IOR_IORFACTORIES_FWD
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_IOR_IORFACTORIES_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::corba::se::spi::ior { class IORFactories; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::corba::se::spi::ior::IORFactories>
{
	static constexpr fixed_string class_name = "com/sun/corba/se/spi/ior/IORFactories";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_IOR_IORFACTORIES_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_IOR_IORFACTORIES)
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_IOR_IORFACTORIES

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/corba/se/spi/ior/IOR.h>
#include <scapix/java_api/com/sun/corba/se/spi/ior/IORFactory.h>
#include <scapix/java_api/com/sun/corba/se/spi/ior/IORTemplate.h>
#include <scapix/java_api/com/sun/corba/se/spi/ior/IORTemplateList.h>
#include <scapix/java_api/com/sun/corba/se/spi/ior/ObjectId.h>
#include <scapix/java_api/com/sun/corba/se/spi/ior/ObjectKey.h>
#include <scapix/java_api/com/sun/corba/se/spi/ior/ObjectKeyFactory.h>
#include <scapix/java_api/com/sun/corba/se/spi/ior/ObjectKeyTemplate.h>
#include <scapix/java_api/com/sun/corba/se/spi/orb/ORB.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/org/omg/CORBA/Object.h>
#include <scapix/java_api/org/omg/CORBA_2_3/portable/InputStream.h>
#include <scapix/java_api/org/omg/PortableInterceptor/ObjectReferenceFactory.h>
#include <scapix/java_api/org/omg/PortableInterceptor/ObjectReferenceTemplate.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::corba::se::spi::ior::IORFactories : public jni::object_base<"com/sun/corba/se/spi/ior/IORFactories",
	java::lang::Object>
{
public:

	static jni::ref<com::sun::corba::se::spi::ior::ObjectId> makeObjectId(jni::ref<jni::array<jbyte>> p1) { return call_static_method<"makeObjectId", jni::ref<com::sun::corba::se::spi::ior::ObjectId>>(p1); }
	static jni::ref<com::sun::corba::se::spi::ior::ObjectKey> makeObjectKey(jni::ref<com::sun::corba::se::spi::ior::ObjectKeyTemplate> p1, jni::ref<com::sun::corba::se::spi::ior::ObjectId> p2) { return call_static_method<"makeObjectKey", jni::ref<com::sun::corba::se::spi::ior::ObjectKey>>(p1, p2); }
	static jni::ref<com::sun::corba::se::spi::ior::IOR> makeIOR(jni::ref<com::sun::corba::se::spi::orb::ORB> p1, jni::ref<java::lang::String> p2) { return call_static_method<"makeIOR", jni::ref<com::sun::corba::se::spi::ior::IOR>>(p1, p2); }
	static jni::ref<com::sun::corba::se::spi::ior::IOR> makeIOR(jni::ref<com::sun::corba::se::spi::orb::ORB> p1) { return call_static_method<"makeIOR", jni::ref<com::sun::corba::se::spi::ior::IOR>>(p1); }
	static jni::ref<com::sun::corba::se::spi::ior::IOR> makeIOR(jni::ref<org::omg::CORBA_2_3::portable::InputStream> p1) { return call_static_method<"makeIOR", jni::ref<com::sun::corba::se::spi::ior::IOR>>(p1); }
	static jni::ref<com::sun::corba::se::spi::ior::IORTemplate> makeIORTemplate(jni::ref<com::sun::corba::se::spi::ior::ObjectKeyTemplate> p1) { return call_static_method<"makeIORTemplate", jni::ref<com::sun::corba::se::spi::ior::IORTemplate>>(p1); }
	static jni::ref<com::sun::corba::se::spi::ior::IORTemplate> makeIORTemplate(jni::ref<org::omg::CORBA_2_3::portable::InputStream> p1) { return call_static_method<"makeIORTemplate", jni::ref<com::sun::corba::se::spi::ior::IORTemplate>>(p1); }
	static jni::ref<com::sun::corba::se::spi::ior::IORTemplateList> makeIORTemplateList() { return call_static_method<"makeIORTemplateList", jni::ref<com::sun::corba::se::spi::ior::IORTemplateList>>(); }
	static jni::ref<com::sun::corba::se::spi::ior::IORTemplateList> makeIORTemplateList(jni::ref<org::omg::CORBA_2_3::portable::InputStream> p1) { return call_static_method<"makeIORTemplateList", jni::ref<com::sun::corba::se::spi::ior::IORTemplateList>>(p1); }
	static jni::ref<com::sun::corba::se::spi::ior::IORFactory> getIORFactory(jni::ref<org::omg::PortableInterceptor::ObjectReferenceTemplate> p1) { return call_static_method<"getIORFactory", jni::ref<com::sun::corba::se::spi::ior::IORFactory>>(p1); }
	static jni::ref<com::sun::corba::se::spi::ior::IORTemplateList> getIORTemplateList(jni::ref<org::omg::PortableInterceptor::ObjectReferenceFactory> p1) { return call_static_method<"getIORTemplateList", jni::ref<com::sun::corba::se::spi::ior::IORTemplateList>>(p1); }
	static jni::ref<org::omg::PortableInterceptor::ObjectReferenceTemplate> makeObjectReferenceTemplate(jni::ref<com::sun::corba::se::spi::orb::ORB> p1, jni::ref<com::sun::corba::se::spi::ior::IORTemplate> p2) { return call_static_method<"makeObjectReferenceTemplate", jni::ref<org::omg::PortableInterceptor::ObjectReferenceTemplate>>(p1, p2); }
	static jni::ref<org::omg::PortableInterceptor::ObjectReferenceFactory> makeObjectReferenceFactory(jni::ref<com::sun::corba::se::spi::orb::ORB> p1, jni::ref<com::sun::corba::se::spi::ior::IORTemplateList> p2) { return call_static_method<"makeObjectReferenceFactory", jni::ref<org::omg::PortableInterceptor::ObjectReferenceFactory>>(p1, p2); }
	static jni::ref<com::sun::corba::se::spi::ior::ObjectKeyFactory> makeObjectKeyFactory(jni::ref<com::sun::corba::se::spi::orb::ORB> p1) { return call_static_method<"makeObjectKeyFactory", jni::ref<com::sun::corba::se::spi::ior::ObjectKeyFactory>>(p1); }
	static jni::ref<com::sun::corba::se::spi::ior::IOR> getIOR(jni::ref<org::omg::CORBA::Object> p1) { return call_static_method<"getIOR", jni::ref<com::sun::corba::se::spi::ior::IOR>>(p1); }
	static jni::ref<org::omg::CORBA::Object> makeObjectReference(jni::ref<com::sun::corba::se::spi::ior::IOR> p1) { return call_static_method<"makeObjectReference", jni::ref<org::omg::CORBA::Object>>(p1); }
	static void registerValueFactories(jni::ref<com::sun::corba::se::spi::orb::ORB> p1) { return call_static_method<"registerValueFactories", void>(p1); }

protected:

	IORFactories(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_IOR_IORFACTORIES
