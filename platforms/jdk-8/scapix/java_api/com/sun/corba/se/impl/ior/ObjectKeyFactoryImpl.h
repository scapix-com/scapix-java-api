// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/com/sun/corba/se/spi/ior/ObjectKeyFactory.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_IOR_OBJECTKEYFACTORYIMPL_FWD
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_IOR_OBJECTKEYFACTORYIMPL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::corba::se::impl::ior { class ObjectKeyFactoryImpl; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::corba::se::impl::ior::ObjectKeyFactoryImpl>
{
	static constexpr fixed_string class_name = "com/sun/corba/se/impl/ior/ObjectKeyFactoryImpl";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::com::sun::corba::se::spi::ior::ObjectKeyFactory>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_IOR_OBJECTKEYFACTORYIMPL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_IOR_OBJECTKEYFACTORYIMPL)
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_IOR_OBJECTKEYFACTORYIMPL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/corba/se/spi/ior/ObjectKey.h>
#include <scapix/java_api/com/sun/corba/se/spi/ior/ObjectKeyTemplate.h>
#include <scapix/java_api/com/sun/corba/se/spi/orb/ORB.h>
#include <scapix/java_api/org/omg/CORBA_2_3/portable/InputStream.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::corba::se::impl::ior::ObjectKeyFactoryImpl : public jni::object_base<"com/sun/corba/se/impl/ior/ObjectKeyFactoryImpl",
	java::lang::Object,
	com::sun::corba::se::spi::ior::ObjectKeyFactory>
{
public:

	static jint MAGIC_BASE() { return get_static_field<"MAGIC_BASE", jint>(); }
	static jint JAVAMAGIC_OLD() { return get_static_field<"JAVAMAGIC_OLD", jint>(); }
	static jint JAVAMAGIC_NEW() { return get_static_field<"JAVAMAGIC_NEW", jint>(); }
	static jint JAVAMAGIC_NEWER() { return get_static_field<"JAVAMAGIC_NEWER", jint>(); }
	static jint MAX_MAGIC() { return get_static_field<"MAX_MAGIC", jint>(); }
	static jbyte JDK1_3_1_01_PATCH_LEVEL() { return get_static_field<"JDK1_3_1_01_PATCH_LEVEL", jbyte>(); }

	static jni::ref<com::sun::corba::se::impl::ior::ObjectKeyFactoryImpl> new_object(jni::ref<com::sun::corba::se::spi::orb::ORB> p1) { return base_::new_object(p1); }
	jni::ref<com::sun::corba::se::spi::ior::ObjectKey> create(jni::ref<jni::array<jbyte>> p1) { return call_method<"create", jni::ref<com::sun::corba::se::spi::ior::ObjectKey>>(p1); }
	jni::ref<com::sun::corba::se::spi::ior::ObjectKeyTemplate> createTemplate(jni::ref<org::omg::CORBA_2_3::portable::InputStream> p1) { return call_method<"createTemplate", jni::ref<com::sun::corba::se::spi::ior::ObjectKeyTemplate>>(p1); }

protected:

	ObjectKeyFactoryImpl(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_IOR_OBJECTKEYFACTORYIMPL