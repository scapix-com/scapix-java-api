// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_IOR_OBJECTREFERENCEPRODUCERBASE_FWD
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_IOR_OBJECTREFERENCEPRODUCERBASE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::corba::se::impl::ior { class ObjectReferenceProducerBase; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::corba::se::impl::ior::ObjectReferenceProducerBase>
{
	static constexpr fixed_string class_name = "com/sun/corba/se/impl/ior/ObjectReferenceProducerBase";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_IOR_OBJECTREFERENCEPRODUCERBASE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_IOR_OBJECTREFERENCEPRODUCERBASE)
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_IOR_OBJECTREFERENCEPRODUCERBASE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/corba/se/spi/ior/IORFactory.h>
#include <scapix/java_api/com/sun/corba/se/spi/ior/IORTemplateList.h>
#include <scapix/java_api/com/sun/corba/se/spi/orb/ORB.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/org/omg/CORBA/Object.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::corba::se::impl::ior::ObjectReferenceProducerBase : public jni::object_base<"com/sun/corba/se/impl/ior/ObjectReferenceProducerBase",
	java::lang::Object>
{
public:

	jni::ref<com::sun::corba::se::spi::ior::IORFactory> getIORFactory() { return call_method<"getIORFactory", jni::ref<com::sun::corba::se::spi::ior::IORFactory>>(); }
	jni::ref<com::sun::corba::se::spi::ior::IORTemplateList> getIORTemplateList() { return call_method<"getIORTemplateList", jni::ref<com::sun::corba::se::spi::ior::IORTemplateList>>(); }
	static jni::ref<com::sun::corba::se::impl::ior::ObjectReferenceProducerBase> new_object(jni::ref<com::sun::corba::se::spi::orb::ORB> p1) { return base_::new_object(p1); }
	jni::ref<org::omg::CORBA::Object> make_object(jni::ref<java::lang::String> p1, jni::ref<jni::array<jbyte>> p2) { return call_method<"make_object", jni::ref<org::omg::CORBA::Object>>(p1, p2); }

protected:

	ObjectReferenceProducerBase(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_IOR_OBJECTREFERENCEPRODUCERBASE