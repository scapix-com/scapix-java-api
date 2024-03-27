// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/corba/se/spi/ior/IdentifiableContainerBase.h>
#include <scapix/java_api/com/sun/corba/se/spi/ior/IORTemplate.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_IOR_IORTEMPLATEIMPL_FWD
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_IOR_IORTEMPLATEIMPL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::corba::se::impl::ior { class IORTemplateImpl; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::corba::se::impl::ior::IORTemplateImpl>
{
	static constexpr fixed_string class_name = "com/sun/corba/se/impl/ior/IORTemplateImpl";
	using base_classes = std::tuple<scapix::java_api::com::sun::corba::se::spi::ior::IdentifiableContainerBase, scapix::java_api::com::sun::corba::se::spi::ior::IORTemplate>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_IOR_IORTEMPLATEIMPL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_IOR_IORTEMPLATEIMPL)
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_IOR_IORTEMPLATEIMPL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/corba/se/spi/ior/IOR.h>
#include <scapix/java_api/com/sun/corba/se/spi/ior/IORFactory.h>
#include <scapix/java_api/com/sun/corba/se/spi/ior/ObjectId.h>
#include <scapix/java_api/com/sun/corba/se/spi/ior/ObjectKeyTemplate.h>
#include <scapix/java_api/com/sun/corba/se/spi/orb/ORB.h>
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/org/omg/CORBA_2_3/portable/InputStream.h>
#include <scapix/java_api/org/omg/CORBA_2_3/portable/OutputStream.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::corba::se::impl::ior::IORTemplateImpl : public jni::object_base<"com/sun/corba/se/impl/ior/IORTemplateImpl",
	com::sun::corba::se::spi::ior::IdentifiableContainerBase,
	com::sun::corba::se::spi::ior::IORTemplate>
{
public:

	jboolean equals(jni::ref<java::lang::Object> p1) { return call_method<"equals", jboolean>(p1); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jni::ref<com::sun::corba::se::spi::ior::ObjectKeyTemplate> getObjectKeyTemplate() { return call_method<"getObjectKeyTemplate", jni::ref<com::sun::corba::se::spi::ior::ObjectKeyTemplate>>(); }
	static jni::ref<com::sun::corba::se::impl::ior::IORTemplateImpl> new_object(jni::ref<com::sun::corba::se::spi::ior::ObjectKeyTemplate> p1) { return base_::new_object(p1); }
	jni::ref<com::sun::corba::se::spi::ior::IOR> makeIOR(jni::ref<com::sun::corba::se::spi::orb::ORB> p1, jni::ref<java::lang::String> p2, jni::ref<com::sun::corba::se::spi::ior::ObjectId> p3) { return call_method<"makeIOR", jni::ref<com::sun::corba::se::spi::ior::IOR>>(p1, p2, p3); }
	jboolean isEquivalent(jni::ref<com::sun::corba::se::spi::ior::IORFactory> p1) { return call_method<"isEquivalent", jboolean>(p1); }
	void makeImmutable() { return call_method<"makeImmutable", void>(); }
	void write(jni::ref<org::omg::CORBA_2_3::portable::OutputStream> p1) { return call_method<"write", void>(p1); }
	static jni::ref<com::sun::corba::se::impl::ior::IORTemplateImpl> new_object(jni::ref<org::omg::CORBA_2_3::portable::InputStream> p1) { return base_::new_object(p1); }

protected:

	IORTemplateImpl(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_IOR_IORTEMPLATEIMPL
